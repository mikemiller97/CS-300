// used in print to print courses alphanumerically
bool sortFunction(Course i, Course j) {
    return i.courseNumber < j.courseNumber;
}

void HashTable::PrintAll() {
    // creates vector to be sorted
    vector<Course> courses;

    // puts all courses in the vector to be sorted
    Node* currentNode = &(nodes.at(0));

    while (currentNode->next) {
        courses.push_back(currentNode->course);
        currentNode = currentNode->next;
    }

    //sorts
    std::sort(courses.begin(), courses.end(), sortFunction);

    //prints sorted vector
    for (Course course : courses) {
        cout << course.courseNumber << ", " << course.courseName << endl;
    }
}
