void main() {
  var s = "(())[{}]";
  // s = "))[{}]";
  // var s = '';
  print("Given Brackets are :: $s");

  var result = Solution.isValid(s);
  print("Brackets are - ${result ? "Valid" : "InValid"} ");
}

class Solution {
  // solution for 1ms execution time
  static bool isValid(String s) {
    List<String> stack = [];

    for (int i = 0; i < s.length; i++) {
      String char = s[i];
      if (char == '(' || char == '[' || char == '{') {
        print("at $i bracket is opening");
        stack.add(char);
      } else if (char == ')' && (stack.isEmpty || stack.removeLast() != '(')) {
        return false;
      } else if (char == ']' && (stack.isEmpty || stack.removeLast() != '[')) {
        return false;
      } else if (char == '}' && (stack.isEmpty || stack.removeLast() != '{')) {
        return false;
      }
      print("Stack contains - $stack ");
    }
    print("Stack contains - $stack ");

    return stack.isEmpty;
  }
}

// solution for 2ms execution time
/*
bool isValid(String s) {
  if (s.trim().isEmpty || s.trim().length <= 1) return false;
  String characters = s.trim();
  final stack = <String>[];
  for (var i = 0; i < characters.length; i++) {
    if (characters[i] == '(' || characters[i] == '{' || characters[i] == '[') {
      stack.add(characters[i]);
    } else if (characters[i] == ')' || characters[i] == '}' || characters[i] == ']') {
      if (stack.isEmpty) return false;
      String last = stack.removeLast();
      if (!isMatchingPair(last, characters[i])) return false;
    }
  }
  if (stack.isNotEmpty) return false;
  return true;
}
bool isMatchingPair(String opening, String closing) {
  return (opening == '(' && closing == ')') ||
      (opening == '{' && closing == '}') ||
      (opening == '[' && closing == ']');
}
*/

// solution for 3ms execution time
/*
bool isValid(String s) {
  for (int i = 0; i < s.length; i++) {
    String char = s[i];
    if (map.containsKey(char)) {
      if (stack.isEmpty || stack.last != map[char]) {
        return false;
      }
      stack.removeLast();
    } else {
      stack.add(char);
    }
  }
  return stack.isEmpty;
}
*/

// solution for 8ms execution time

/*
bool isValid(String s) {
  for (int i = 0; i < s.length; i++) {
    String char = s[i];

    if (map.containsValue(char)) {
      stack.add(char);
    } else if (map.containsKey(char)) {
      if (stack.isEmpty || stack.removeLast() != map[char]) {
      return false;
      }
    }
  }
  return stack.isEmpty;
}
*/

/*
List<String> stack = [];
Map<String, String> map = {
')': '(',
'}': '{',
']': '[',
};
 */