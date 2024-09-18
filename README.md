Streaming Service -  Project

This is a project for a streaming service platform developed in C++ with strong emphasis on Object-Oriented Programming. The project implements fundamental OOP concepts such as inheritance, polymorphism, operator overloading, and the use of pointers.

Description

The program manages a streaming service system that includes the display and management of videos, movies, and series. Users can interact with the different types of videos and retrieve information about each one using object-oriented programming features.

Project Features

1. Inheritance

	•	The Movie and Series classes inherit from the base class Video. This allows for sharing common attributes and methods, such as name, duration, genre, and ratings, while extending with specific behaviors.

2. Polymorphism

	•	The system handles Movie and Series objects through pointers to the base class Video. This allows for performing generic operations on different types of videos.

3. Operator Overloading

	•	The << operator is redefined to simplify the direct printing of Video objects and their derivatives, making the output of information clearer and more manageable.

4. Use of Pointers

	•	Video objects are dynamically managed in the system, enabling efficient memory management and the implementation of polymorphism.
