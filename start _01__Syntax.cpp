#include <iostream>       // (#) = ak  preprocessor directives hai 
                          //  (include) = ak header file
                          //  iostream : input-output stream, jisme cin (input), cout (output) hota hai.
using namespace std;      
//std ka matlab hota hai Standard

int main(){
  return 0;
}

//____________________________________________________________________________________________________________________________//



// __________INPUT AND OUTPUT IN C++________________//
#include <iostream>
using namespace std;
int main(){
  string = name;
  cin>>name;
  cout<<"Hello "<<name;

  return 0;
}

//____________________________________________________________________________________________________________________________//


//________________conditional oprators_______________________//
#include <iostream>
using namespace std;
int main(){
int age;
cin>>age;
  if (age>18){
    cout<<"You can vote";
  }
  else{
    cout<<"You can not vote";
  }
  
  return 0;
}

//____________________________________________________________________________________________________________________________//


//_______________________FOR-LOOPS_________________________________//

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        cout << "For loop iteration: " << i << endl;
    }
    return 0;
}

//____________________________________________________________________________________________________________________________//

//_______________________FOR-LOOPS_________________________________//
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while (i <= 5) {
        cout << "While loop iteration: " << i << endl;
        i++;
    }
    return 0;
}


//____________________________________________________________________________________________________________________________//

//_______________________DO-LOOPS_________________________________//

#include <iostream>
using namespace std;

int main() {
    int i = 1;
    do {
        cout << "Do-while loop iteration: " << i << endl;
        i++;
    } while (i <= 5);
    return 0;
}

//____________________________________________________________________________________________________________________________//

//_______________________BREAK-CONTINUE_________________________________//

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        if (i == 3) continue; // 3 skip karega
        if (i == 5) break;    // 5 pe loop band ho jayega
        cout << "Value: " << i << endl;
    }
    return 0;
}

//____________________________________________________________________________________________________________________________//


//_______________________SWICH-CASE_________________________________//

switch (expression) {
    case value1:
        // block of code
        break;
    case value2:
        // block of code
        break;
    case value3:
        // block of code
        break;
    default:
        // block of code
}






