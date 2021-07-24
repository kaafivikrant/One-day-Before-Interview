**- What are some of the advantages of MongoDB?**

Some advantages of MongoDB are as follows:

- MongoDB supports field, range-based, string pattern matching type queries. for searching the data in the database.
- MongoDB support primary and secondary index on any fields.
- MongoDB basically uses JavaScript objects in place of procedures.
- MongoDB uses a dynamic database schema.
- MongoDB is very easy to scale up or down.
- MongoDB has inbuilt support for data partitioning (Sharding).


**- What is a Document in MongoDB?**

A Document in MongoDB is an ordered set of keys with associated values. It is represented by a map, hash, or dictionary. In JavaScript, documents are represented as objects:
{"greeting" : "Hello world!"}

Complex documents will contain multiple key/value pairs:
{"greeting" : "Hello world!", "views" : 3}

**- What is a Collection in MongoDB?**

A collection in MongoDB is a group of documents. If a document is the MongoDB analog of a row in a relational database, then a collection can be thought of as the analog to a table.

Documents within a single collection can have any number of different “shapes.”, i.e. collections have dynamic schemas. 

For example, both of the following documents could be stored in a single collection:

```js position-relative
{"greeting" : "Hello world!", "views": 3}
{"signoff": "Good bye"}
```

**- What are Databases in MongoDB?**

MongoDB groups collections into databases. MongoDB can host several databases, each grouping together collections. 

Some reserved database names are as follows:
- admin
- local
- config

**- What is the Mongo Shell?**

It is a JavaScript shell that allows interaction with a MongoDB instance from the command line. With that one can perform administrative functions, inspecting an instance, or exploring MongoDB. 

To start the shell, run the mongo executable:
```js position-relative
$ mongod
$ mongo
MongoDB shell version: 4.2.0
connecting to: test
>
```
The shell is a full-featured JavaScript interpreter, capable of running arbitrary JavaScript programs. Let’s see how basic math works on this:

```js position-relative
> x = 100;
200
> x / 5;
20
```

**- How does Scale-Out occur in MongoDB?**

The document-oriented data model of MongoDB makes it easier to split data across multiple servers. Balancing and loading data across a cluster is done by MongoDB. It then redistributes documents automatically.

The mongos acts as a query router, providing an interface between client applications and the sharded cluster.

Config servers store metadata and configuration settings for the cluster. MongoDB uses the config servers to manage distributed locks. Each sharded cluster must have its own config servers. 



**- What are some features of MongoDB?**

- Indexing: It supports generic secondary indexes and provides unique, compound, geospatial, and full-text indexing capabilities as well.
- Aggregation: It provides an aggregation framework based on the concept of data processing pipelines.
- Special collection and index types: It supports time-to-live (TTL) collections for data that should expire at a certain time
- File storage: It supports an easy-to-use protocol for storing large files and file metadata.
- Sharding: Sharding is the process of splitting data up across machines.

