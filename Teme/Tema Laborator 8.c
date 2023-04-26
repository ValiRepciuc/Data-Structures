//1.1 Transformati expresia artimetica formati infix in Prefix si Post fix, folosind un arbore binar.

//A + B - C*D + (E^F) * G/H/I * P + Q

//am notat E^F E la puterea F
/*

                                    +
                                  /   \
                                 +     Q
                                / \
                               /   \
                              /     \
                             /       \
                            /         \
                           /           \
                          /             \
                         /               \
                        -                 *
                       / \               / \
                      /   \             /   \
                     /     \           /     \
                    +       *         :       P
                   / \     / \       / \
                  /   \   /   \     /   \
                 A     B C     D   :     I
                                  / \
                                 /   \
                                *     H
                               / \
                              /   \
                             *     G
                            / \
                           /   \
                          E     F
*/
//* Prefix: ++-+AB*CD*//*^EFGHIPQ
//* Postfix: AB+CD*-EF^G*H/I/P*+Q+
