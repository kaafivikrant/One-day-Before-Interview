#include <iostream>
#include <utility>
#include <vector>
#include <numeric>
#include <queue>
#include <cmath>
#include <map>
#include <string>
#include <cstring>
#include <algorithm>
#include <fstream>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <list>
#include <stack>
#define ll long long
#define dd double
#include <stack>
#include <chrono>
#include <thread>

using namespace std;


void mergeSort(vector<int>&left, vector<int>& right, vector<int>& bars)
{
    int nL = left.size();
    int nR = right.size();
    int i = 0, j = 0, k = 0;

    while (j < nL && k < nR)
    {
        if (left[j] < right[k]) {
            bars[i] = left[j];
            j++;
        }
        else {
            bars[i] = right[k];
            k++;
        }
        i++;
    }
    while (j < nL) {
        bars[i] = left[j];
        j++; i++;
    }
    while (k < nR) {
        bars[i] = right[k];
        k++; i++;
    }
}

void sort(vector<int> & bar) {
    if (bar.size() <= 1) return;

    int mid = bar.size() / 2;
    vector<int> left;
    vector<int> right;

    for (size_t j = 0; j < mid;j++) {
        left.push_back(bar[j]);
    }
    
    for (size_t j = 0; j < (bar.size()) - mid; j++) {
        right.push_back(bar[mid + j]);
    }

    sort(left);
    sort(right);
    mergeSort(left, right, bar);
}

int main() {
    vector<int> nums;
    for (size_t i = 0; i < 11; i++)
        nums.push_back(rand() % 1000);

    sort(nums);

    for (size_t i = 0; i < nums.size(); i++) {
        cout << nums[i] << endl;
    }
    system("pause");
    return 1;
}


/*
 *If you look at most C++ algorithms they don't take a container as a parameter (vector<> is a container), instead they take iterators into the container. That way the algorithm can be used on any type of container (or a sub range of a container).

Also be using templates you can make the code work with any type that supports the comparison operator less than operator<.

Code Review
Vertical White Space
Nothing wrong here:

#include <vector>
#include <iostream>
using namespace std;
void sort(vector<int> & bar);
void mergeSort(vector<int>&left,vector<int>& right,vector<int>& bars);
But it seems a bit cramped all together. If you add some judicious vertical white space you can make it easier to read. I tend to separate logically distinct parts with an extra blank line. Like this:

#include <vector>
#include <iostream>

using namespace std;

void sort(vector<int> & bar);
void mergeSort(vector<int>&left,vector<int>& right,vector<int>& bars);
Using namespace
Please don't do this:

using namespace std;
Yes. All the C++ text books use it. But they are trying to save space because a book only has so much space available for printing. In real programs this is actually quite dangerous and should be avoided.

The reason the Standard namespace is called std is so that prefixing members with std:: is not a big hurdle.

Read this for details: Why is “using namespace std” considered bad practice?

Prefer prefix ++
    for (size_t i = 0; i < 11; i++)
OK. In this case (and a lot of cases) it makes no difference if you use the prefix or postfix version. But it can make a difference when the object being incremented is an object (lot of container iterators). A lot of the time when modifying C++ code, you change the type in one place and the type changes will cascade through your code, so it is best to always use the most efficient version no matter what the current type is. So in these cases prefer to use the prefix increment.

If you always use prefix ++ then you will always have the optimal increment.

    for (auto i = 0; i < 11; ++i) // Also note the use of auto
rand() is not very random
        nums.push_back(rand() % 1000);
This is the C random number generator. C++ has its own random number generator that is much better.See here for interface and example: http://en.cppreference.com/w/cpp/numeric/random

Also note that because you don't use srand() you will get the same sequence of numbers every time (which is a useful feature for testing).

Prefer Range based for:
When iterating over a container (something that supports begin/end) prefer to use the range based for.

    for (size_t i = 0; i < nums.size(); i++)
        cout << nums[i] <<endl;

    for (auto const& num: nums) {
        cout << num << "\n";
    }
Always use {} around sub blocks
I know it looks safe not to bother in places like this:

    for (size_t i = 0; i < nums.size(); i++)
        cout << nums[i] <<endl;
But it is a common type of error to add an extra indent line or use a function that happens to be multiple statement macro. To avoid these issues simply add braces.

    for (size_t i = 0; i < nums.size(); i++) {
        cout << nums[i] << "\n";
    }
Prefer '\n' over std::endl
The main difference in the two is that std::endl in addition to adding \n to the stream will flush the stream. The stream will already auto flush at the optimal times and forcing a manual flush will only result in a degradation in performance.

Don't use system dependent code
    system("pause");
This only works on windows. Easier to just ask the user for input.

    std::cout << "Hit Return to continue\n";
    std::string line;
    std::getline(std::cin, line);
Don't need return in main
    return 1;
The main() function is special. If you don't specify a return value then the compiler will auto generate one for you that returns 0.

So it has become traditional for simple applications that never fail to have no return statement as an indication that this application will never fail. If I see a return statement at the end of main I will look through main to find the other return statements that indicate a failure state.

You should also note that a return value of non zero from main() is an indication to the operating system that the application failed. So return 1; lets the OS know your application failed and can potentially cause it to throw up an error screen to the user.

The & and * are part of the type
The & and * are part of the type in C++ and usually placed syntactically with the type information.

void sort(vector<int> & bar) {
Putting a space between the type and the & just looks strange.

void sort(vector<int>& bar) {
Don't run if statement together
    if (bar.size() <= 1) return;
Prefer to use two lines for this (and the sub block brace).

    if (bar.size() <= 1) {
        return;
    }
When debugging the code and stepping through it this will make your life easier.

Use reserve
    int mid = bar.size() / 2;
    vector<int> left;
    vector<int> right;
To prevent potential re-allocation of the underlying storage you can use reserve to make sure these vectors have enough space.

    left.reserve(mid);
    right.reserve(bar.size() - mid);
Prefer to use standard algorithms rather than manual loops.
    for (size_t j = 0; j < mid;j++)
        left.push_back(bar[j]);
    for (size_t j = 0; j < (bar.size()) - mid; j++)
        right.push_back(bar[mid + j]);
There is a standard copy. You should check out the standard for a list of helpful algorithms. http://en.cppreference.com/w/cpp/algorithm

    std::copy(std::begin(bar), std::begin(bar) + mid, std::back_inserter(left));
    std::copy(std::begin(bar) + mid, std::end(bar), std::back_inserter(right));
One Line Per Variable (and use meaningful names)
    int i = 0, j = 0, k = 0;
There is a big push for self documenting code. Part of this is to make sure that you can understand what is happening by reading the names of the variables and the functions. So names like i,j,k are not meaningful (unless you happen to have done a lot of fortran programming).

    int leftLoop  = 0;
    int rightLoop = 0;
    int barLoop   = 0;
Stable Sort
An important property of sorting is to try and keep equal object in the same relative order after the sort. A sort that does this is called a stable sort. This means if two values are equal you should choose the one from the left rather than the right vector.

        // This is not stable.
        // When the objects are equal you select the one from the right.
        // To make this sort stable change to use `<=`
        if (left[j] < right[k]) {
            bars[i] = left[j];
            j++;
        }
        else {
            bars[i] = right[k];
            k++;
        }
Simplify using Ternary
This is a dangerous piece of advice. Use it judiciously as overuse can make the code harder to read. But sometimes it is useful to use ? : operator as it can make the code simpler and easier to read.

But sometimes it is useful to use the ternary operator instead of and if then else block. I think this is one of these places (others will disagree so use if you like).

        bars[i] = (left[j] <= right[k])
                    ? left[j++]
                    : right[k++];
        ++i;
Advanced Section
I would redesign this to use templates and iterators.

template<typename I>
void sort(I begin, I end);
template<typename I>
void merge(I leftBegin, I leftEnd, I rightBegin, I rightEnd, I destination);
When you start using templates and don't know what the type being sorted is things can get complicated because the underlying type may be very expensive to copy around. So you should prefer to move object rather than copy objects (for integers it makes no difference so I did not mention it above).

for(auto& val: container) {
    dest.emplace_back(std::move(val));
}
Also there is a move algorithm for moving objects from one container to another.

std::move(std::begin(container), std::end(container), std::back_inserter(dest));
You allocate a lot of temporary vectors (there is a left/right in each recursive call to sort()). You can pre-allocate these vectors and re-use them throughout your recursion (with a tiny bit of extra work).
 *


 * */
