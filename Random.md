*Startup:*
1️⃣ Have you tested this code? Make sure it doesn't break the feature I pushed yesterday.
2️⃣ Add another metric to monitor user engagement.

*Corporate:*
1️⃣ Make variables final.
2️⃣ Use better variable/function/class name.
3️⃣ Handle null values.
4️⃣ Is it thread-safe?
5️⃣ Will it support multi marketplace?
6️⃣ Add latency and count metrics for each important functions.
7️⃣ Can we cache this response instead of calling dependent service each time?
8️⃣ Code coverage is not 100% for new changes. Add more unit tests.


React App:-

npx create-react-app my-app
cd my-app
npm start

Netlify deployment:-

npm run build (to build your react app)
npm install netlify-cli -g (install npm package of netlify)
netlify status (to check status)
netlify login (login to netlify with account you created on netlify)
netlify sites:create (create site)
netlify deploy (deploy application)
netlify deploy --prod (deploy on production mode)

