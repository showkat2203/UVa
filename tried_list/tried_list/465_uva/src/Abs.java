/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Neerleepto Sonnet
 */
abstract class A {
abstract void callme();
// concrete methods are still allowed in abstract classes
void callmetoo() {
System.out.println("This is a concrete method.");
}
}
class B extends A {
void callme() {
System.out.println("This is a concrete method.");
}
}
class Abs {
public static void main(String args[]) {
B b = new B();
b.callme();
b.callmetoo();
}
}
