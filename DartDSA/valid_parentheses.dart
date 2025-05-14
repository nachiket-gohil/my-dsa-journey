String brackets = "";
var occurrence = [];

void main() {
  brackets = "([{}])";
  brackets = "()[]{}";
  brackets = "(]";
  brackets = "[()]{}";
  // brackets = "([)]";
  // brackets = "]";
  // brackets = "){";

  print("Given Bracket array :: \" $brackets \" ");

  for (int i = 0; i < brackets.length; i++) {
    if (i == 0) {
      print('First element: ${brackets[i]}');

      if (brackets[i] != ")" && brackets[i] != "]" && brackets[i] != "}") {
        if (brackets.length % 2 == 0) {
          print("brackets are even");
          // Solution.storeOcc(i);
          Solution.storeStack(i);
          print("Occurrence array :: $occurrence");
        } else {
          print("brackets are not even");
          occurrence.add(1);
        }
      }
    } else {
      occurrence.add(-1);
    }
  }

  Solution.isValid(brackets);
}

class Solution {
  static bool isValid(String s) {
    if (occurrence.isEmpty) {
      print(">>>>>> Success");
      return true;
    } else {
      print(">>>>>> Failed");
      return false;
    }
  }

  static void storeStack(int i) {
    if (brackets[i].contains("(")) {
      occurrence.add(")");
    }
    if (brackets[i].contains("[")) {
      occurrence.add("]");
    }
    if (brackets[i].contains("{")) {
      occurrence.add("}");
    }
    if (brackets[i].contains(")")) {
      if (occurrence.last == ")") {
        occurrence.removeLast();
      }
    }
    if (brackets[i].contains("]")) {
      if (occurrence.last == "]") {
        occurrence.removeLast();
      }
    }
    if (brackets[i].contains("}")) {
      if (occurrence.last == "}") {
        occurrence.removeLast();
      }
    }
  }

  static void storeOcc(int i) {
    if (brackets[i].contains("(")) {
      occurrence.add(1);
    } else if (brackets[i].contains(")")) {
      if (occurrence.last == 1) {
        occurrence.remove(1);
      }
    }

    if (brackets[i].contains("[")) {
      occurrence.add(2);
    } else if (brackets[i].contains("]")) {
      if (occurrence.last == 2) {
        occurrence.remove(2);
      }
    }

    if (brackets[i].contains("{")) {
      occurrence.add(3);
    } else if (brackets[i].contains("}")) {
      if (occurrence.last == 3) {
        occurrence.remove(3);
      }
    }
  }
}
