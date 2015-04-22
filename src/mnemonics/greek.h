// Word list originally created as part of the Electrum project, Copyright (C) 2014 Thomas Voegtlin
// 
// Copyright (c) 2014-2015, The Monero Project
// 
// All rights reserved.
// 
// Redistribution and use in source and binary forms, with or without modification, are
// permitted provided that the following conditions are met:
// 
// 1. Redistributions of source code must retain the above copyright notice, this list of
//    conditions and the following disclaimer.
// 
// 2. Redistributions in binary form must reproduce the above copyright notice, this list
//    of conditions and the following disclaimer in the documentation and/or other
//    materials provided with the distribution.
// 
// 3. Neither the name of the copyright holder nor the names of its contributors may be
//    used to endorse or promote products derived from this software without specific
//    prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY
// EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
// MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL
// THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
// STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF
// THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

/*!
 * \file greek.h
 * 
 * \brief Greek word list and map.
 */

#ifndef GREEK_H
#define GREEK_H

#include <vector>
#include <unordered_map>
#include "language_base.h"
#include <string>

/*!
 * \namespace Language
 * \brief Mnemonic language related namespace.
 */
namespace Language
{
  class Greek: public Base
  {
  public:
    Greek()
    {
      word_list = new std::vector<std::string>({
"άβολα"
"άγαλμα"
"αγάπη"
"άγγελος"
"αγελάδα"
"αγενής"
"άγιος"
"αγκαλιά"
"άγνωστο"
"αγορά"
"αγόρι"
"άγριο"
"άγχος"
"αγωγή"
"αγώνας"
"αγωνία"
"αδελφός"
"άδικο"
"αδύναμος"
"αέρας"
"αέριο"
"αηδία"
"αθώος"
"αίθουσα"
"αίμα"
"αίσθηση"
"αίτηση"
"αιτία"
"αιώνας"
"ακαδημία"
"ακίνητος"
"ακοής"
"ακολουθώ"
"ακόμα"
"ακούω"
"άκρη"
"ακρίβεια"
"ακριβώς"
"ακρόαση"
"ακτή"
"ακτίνα"
"αλάτι"
"αλεπού"
"αλήθεια"
"αληθινός"
"αλλαγή"
"αλλιώς"
"άλλο"
"άλλωστε"
"άλμα"
"άλογο"
"αλυσίδα"
"αμάν"
"αμάξι"
"αμαρτία"
"άμεσα"
"αμέσως"
"αμοιβή"
"άμυνα"
"ανάγκη"
"ανάθεμα"
"ανάκριση"
"ανάλογα"
"ανάλυση"
"ανάμεσα"
"ανάμνηση"
"αναμονή"
"αναπνοή"
"ανάποδα"
"ανάπτυξη"
"ανάσα"
"ανατολή"
"αναφέρω"
"αναφορά"
"άνδρας"
"άνεμος"
"άνετα"
"ανήκω"
"ανησυχώ"
"άνθρωπος"
"ανοησία"
"ανόητος"
"ανοίγω"
"άνοιξη"
"ανοιχτά"
"άντε"
"αντέχω"
"αντί"
"αντίθετα"
"αντίο"
"αξία"
"αξίζω"
"απαγωγή"
"απαλά"
"απάντηση"
"απάτη"
"απειλή"
"απέναντι"
"απίθανο"
"απλά"
"απόγευμα"
"απόδειξη"
"απόδοση"
"αποθήκη"
"απόλυτα"
"απόπειρα"
"απόσταση"
"αποστολή"
"αποτυχία"
"απόφαση"
"απόψε"
"άποψη"
"απώλεια"
"άραγε"
"αργά"
"αργότερα"
"άρθρο"
"αριθμός"
"αριστερά"
"αρκετά"
"αρκούδα"
"αρνητικό"
"άρρωστος"
"αρχείο"
"αρχή"
"αρχηγείο"
"αρχηγός"
"αρχίζω"
"αρχικά"
"άρωμα"
"ασθένεια"
"άσκηση"
"ασπίδα"
"άσπρο"
"αστείος"
"αστέρι"
"αστραπή"
"άσυλο"
"ασφάλεια"
"ασφαλώς"
"άσχημος"
"άτομο"
"ατύχημα"
"αυγή"
"αυγό"
"αυλή"
"αύξηση"
"αύριο"
"αυτά"
"αυτί"
"αυτός"
"αφέντης"
"αφεντικό"
"αφήνω"
"αφορά"
"αφοσίωση"
"αφότου"
"αφού"
"αφρική"
"άχρηστος"
"βάζω"
"βαθμός"
"βάθος"
"βαθύ"
"βαλίτσα"
"βάρδια"
"βαρετός"
"βάρκα"
"βάρος"
"βαρύ"
"βάση"
"βασικά"
"βασίλειο"
"βγάζω"
"βγαίνω"
"βεβαιωθώ"
"βεβαίως"
"βενζίνη"
"βέρα"
"βήμα"
"βιβλίο"
"βίντεο"
"βλάβη"
"βλάκας"
"βλέμμα"
"βλέπω"
"βοηθάω"
"βοήθεια"
"βοηθός"
"βολή"
"βόλτα"
"βόμβα"
"βόρεια"
"βότκα"
"βουνό"
"βούτυρο"
"βραβείο"
"βραδιά"
"βραβείο"
"βράδυ"
"βράχος"
"βρέχει"
"βρίσκω"
"βροχή"
"βρώμικο"
"βυζιά"
"γάλα"
"γάμος"
"γάντια"
"γάτα"
"γεγονός"
"γεγονότα"
"γεια"
"γειτονιά"
"γελάει"
"γελάω"
"γέλιο"
"γελοίος"
"γεμάτο"
"γεμίσει"
"γενέθλια"
"γενιά"
"γενικά"
"γενναία"
"γενναίος"
"γεννηθεί"
"γερά"
"γέρος"
"γεύμα"
"γεύση"
"γέφυρα"
"γήπεδο"
"γιαγιά"
"γιατί"
"γιατρός"
"γιορτή"
"γιος"
"γκάζι"
"γκαράζ"
"γκολ"
"γλυκό"
"γλυκός"
"γλώσσα"
"γνώμη"
"γνωρίζω"
"γνωριμία"
"γνώση"
"γνωστός"
"γοητεία"
"γόνατα"
"γονείς"
"γουρούνι"
"γουστάρω"
"γούστο"
"γραβάτα"
"γράμμα"
"γράμματα"
"γραμμένο"
"γραμμές"
"γραμμή"
"γρασίδι"
"γραφείο"
"γραφτό"
"γράφω"
"γρήγορα"
"γρήγορος"
"γριά"
"γροθιά"
"γυαλί"
"γυμνάσιο"
"γυμνός"
"γυναίκα"
"γυρίζω"
"γύρισμα"
"γύρος"
"γύρω"
"γωνία"
"δαίμονες"
"δάκρυα"
"δάνειο"
"δασκάλα"
"δάσκαλος"
"δάσος"
"δάχτυλο"
"δεδομένα"
"δείγμα"
"δειλός"
"δείξω"
"δείπνο"
"δείχνω"
"δέκα"
"δεκαετία"
"δεκάρα"
"δελτίο"
"δέντρο"
"δεξαμενή"
"δεξιά"
"δέρμα"
"δεσμός"
"δευτέρα"
"δεχτώ"
"δηλαδή"
"δήλωση"
"δήμαρχος"
"δημόσιο"
"διαβάζω"
"διάβασμα"
"διάβολος"
"διαδρομή"
"διαζύγιο"
"διάθεση"
"διαθήκη"
"διακοπές"
"διακόπτω"
"διαμάντι"
"διανομή"
"διάρκεια"
"διαρροή"
"διάσημος"
"διάστημα"
"διαταγή"
"διατάζω"
"διαφορά"
"δίκαιο"
"δικαίωμα"
"δικαστής"
"δίκη"
"δικηγόρος"
"δίκιο"
"δίκτυο"
"δίνω"
"διοίκηση"
"διότι"
"δίπλα"
"δίπλωμα"
"δίσκος"
"δίχως"
"δοκιμάζω"
"δοκιμή"
"δόκτωρ"
"δολάριο"
"δολοφόνος"
"δόλωμα"
"δόντια"
"δόξα"
"δόση"
"δουλειά"
"δουλεύω"
"δράκος"
"δράση"
"δρόμος"
"δυλειά"
"δύναμη"
"δυνατά"
"δυνατός"
"δύση"
"δύσκολα"
"δυστυχία"
"δυστυχώς"
"δυτικά"
"δώδεκα"
"δωμάτιο"
"δωρεάν"
"δώρο"
"εαυτός"
"εβδομάδα"
"εβραίος"
"έγγραφα"
"εγγύηση"
"έγινα"
"εγκέφαλο"
"έγκλημα"
"έγκριση"
"έγκυος"
"έδαφος"
"έδωσα"
"εθνική"
"έθνος"
"είδη"
"ειδήσεις"
"είδηση"
"ειδικός"
"είδος"
"εικόνα"
"είκοσι"
"είμαι"
"ειρήνη"
"εισβολή"
"είσοδος"
"είτε"
"εκατό"
"εκδίκηση"
"έκδοση"
"εκεί"
"εκείνο"
"έκθεση"
"εκκλησία"
"εκλογές"
"έκπληξη"
"εκπομπή"
"έκρηξη"
"εκτέλεση"
"εκτίμηση"
"εκτιμώ"
"εκτός"
"έκφραση"
"ελάφι"
"ελάχιστα"
"έλεγχος"
"έλεος"
"ελεύθερο"
"ελλάδα"
"έλλειψη"
"ελπίδα"
"ελπίζω"
"εμείς"
"εμμονή"
"εμπειρία"
"εμπόδιο"
"εμπόριο"
"έμπορος"
"εμπρός"
"εμφάνιση"
"εναντίον"
"ένας"
"ένδειξη"
"ενέργεια"
"ένεση"
"εννέα"
"έννοια"
"εννοώ"
"ένορκοι"
"ενόχληση"
"ενοχλώ"
"ένοχος"
"ένσταση"
"ένστικτο"
"ένταλμα"
"εντάξει"
"ένταση"
"έντεκα"
"εντελώς"
"εντολή"
"εντός"
"εντύπωση"
"ένωση"
"εξαίρεση"
"εξάλλου"
"εξάσκηση"
"εξέλιξη"
"εξέταση"
"εξής"
"εξίσου"
"έξοδα"
"έξοδος"
"εξουσία"
"εξοχή"
"έξτρα"
"έξυπνος"
"επάνω"
"επαρχία"
"επαφή"
"επείγον"
"επειδή"
"έπειτα"
"επέμβαση"
"επιβάτες"
"επίδειξη"
"επίθεση"
"επιθυμία"
"επιλογή"
"επιμένω"
"επίπεδο"
"έπιπλα"
"επιπλέον"
"επιρροή"
"επίσημα"
"επίσης"
"επίσκεψη"
"επιστήμη"
"επιστολή"
"επιταγή"
"επίτηδες"
"επιτροπή"
"επιτυχία"
"επόμενο"
"επομένως"
"εποχή"
"επτά"
"εραστής"
"εργαλείο"
"εργασία"
"εργάτες"
"έργο"
"έρευνα"
"έρημος"
"ερωμένη"
"έρωτας"
"ερώτηση"
"έστω"
"εσώρουχα"
"εταιρεία"
"έτοιμος"
"έτος"
"έτσι"
"ευγένεια"
"ευγενικά"
"ευγνώμων"
"ευθεία"
"ευθύνη"
"ευκαιρία"
"εύκολα"
"ευλογία"
"ευρώ"
"ευρώπη"
"ευτυχία"
"ευτυχώς"
"ευχή"
"εφιάλτης"
"εφόσον"
"έχει"
"εχθρός"
"έχοντας"
"ζάχαρη"
"ζέστη"
"ζευγάρι"
"ζηλεύω"
"ζημιά"
"ζήτα"
"ζήτημα"
"ζητώ"
"ζόμπι"
"ζόρι"
"ζούγκλα"
"ζωές"
"ζώνη"
"ζωντανά"
"ηγέτης"
"ήθελα"
"ηθική"
"ηθοποιός"
"ήλθατε"
"ηλικία"
"ήλιος"
"ημέρα"
"ηρεμία"
"ήρεμος"
"ήρωας"
"ήσυχα"
"ήσυχος"
"ήχος"
"θάλαμος"
"θάλασσα"
"θάνατος"
"θάρρος"
"θαύμα"
"θαυμάζω"
"θαυμάσια"
"θέαμα"
"θέατρο"
"θείος"
"θέληση"
"θέλω"
"θέμα"
"θεός"
"θεραπεία"
"θέση"
"θεωρία"
"θεωρώ"
"θησαυρός"
"θλιβερό"
"θλίψη"
"θόρυβος"
"θρησκεία"
"θρόνος"
"θρύλος"
"θύμα"
"θυμός"
"θυσία"
"ιαπωνία"
"ιατρική"
"ιδέα"
"ίδιο"
"ιδιοφυία"
"ιδιωτικό"
"ίδρυμα"
"ιερέας"
"ιερό"
"ικανός"
"ικετεύω"
"ιππότης"
"ίσια"
"ισόβια"
"ιστορία"
"ιστορικό"
"ισχύει"
"ισχυρό"
"ίσως"
"ίχνος"
"καθαρός"
"κάθε"
"καθένας"
"καθήκον"
"κάθισμα"
"καθόλου"
"καθρέφτη"
"καθώς"
"καιρός"
"κακό"
"καλά"
"καλάθι"
"καλή"
"καλημέρα"
"καλός"
"καλοσύνη"
"κάλτσες"
"καλύβα"
"καλύτερα"
"κάλυψη"
"καλώ"
"καλώδιο"
"κάμερα"
"καμπίνα"
"κανάλι"
"καναπές"
"κανένα"
"κανόνας"
"κανονικά"
"κάνω"
"καπέλο"
"καπνίζω"
"κάπνισμα"
"καπνός"
"κάποτε"
"κάπου"
"κάπως"
"καράβι"
"καρδιά"
"καρέκλα"
"καριέρα"
"κάρτα"
"καρύδια"
"καρφί"
"κασέτα"
"κάστρο"
"καταδίκη"
"κατάθεση"
"κατάρα"
"κατηγορώ"
"κάτι"
"κατόπιν"
"κατοχή"
"κάτω"
"καυγάς"
"καύσιμα"
"καυτό"
"καφές"
"κενό"
"κεντρικό"
"κέντρο"
"κέρδη"
"κερδίζω"
"κέρδος"
"κερί"
"κεφάλι"
"κέφι"
"κηδεία"
"κήπος"
"κιθάρα"
"κιλά"
"κίνδυνος"
"κίνηση"
"κινητό"
"κίνητρο"
"κιόλας"
"κίτρινο"
"κλαίω"
"κλειδί"
"κλείνω"
"κλειστά"
"κλέφτης"
"κλήση"
"κλινική"
"κλόουν"
"κλοπή"
"κλουβί"
"κοιλάδα"
"κοιλιά"
"κοινό"
"κοινωνία"
"κοιτάζω"
"κόκα"
"κόκκινο"
"κόλαση"
"κολέγιο"
"κόλλα"
"κολλέγιο"
"κόλπο"
"κολύμπι"
"κόμη"
"κόμης"
"κομμάτι"
"κοντά"
"κόντρα"
"κοπάδι"
"κόπανος"
"κοπέλα"
"κόρη"
"κορίτσι"
"κορμί"
"κορόιδο"
"κορυφή"
"κόσμος"
"κόστος"
"κοστούμι"
"κότα"
"κότσια"
"κούβα"
"κουβέντα"
"κουβέρτα"
"κουδούνι"
"κουζίνα"
"κούκλα"
"κουμπί"
"κουράγιο"
"κούρσα"
"κουτί"
"κουφός"
"κρανίο"
"κράνος"
"κρασί"
"κράτος"
"κρέας"
"κρεββάτι"
"κρέμα"
"κρίμα"
"κρίνω"
"κρίση"
"κρύο"
"κρυφά"
"κρυώνω"
"κτήμα"
"κτήνος"
"κτίριο"
"κύκλους"
"κύμα"
"κυνήγι"
"κυνηγός"
"κύπελλο"
"κυρία"
"κυριακή"
"κυρίως"
"κωδικός"
"λάδι"
"λάθος"
"λαιμός"
"λάμπα"
"λάμψη"
"λαός"
"λάσπη"
"λάστιχο"
"λατρεύω"
"λαχανικά"
"λείπω"
"λέξη"
"λεπτά"
"λέσχη"
"λευκό"
"λεφτά"
"ληστεία"
"λήψη"
"λίγα"
"λιγάκι"
"λιγότερο"
"λιμάνι"
"λίμνη"
"λιοντάρι"
"λίρες"
"λίστα"
"λόγια"
"λογικά"
"λογική"
"λόγος"
"λοιπόν"
"λονδίνο"
"λόρδος"
"λουλούδι"
"λόφος"
"λοχαγός"
"λοχίας"
"λύκειο"
"λύκος"
"λύσεις"
"λύση"
"μαγαζί"
"μαγεία"
"μάγια"
"μαγικά"
"μάγισσα"
"μάγκες"
"μάγος"
"μαζί"
"μαθαίνω"
"μάθημα"
"μαθήματα"
"μαθητής"
"μακάρι"
"μακριά"
"μακρύ"
"μαλακό"
"μάλιστα"
"μαλλί"
"μάλλον"
"μαμά"
"μάνα"
"μάνατζερ"
"μαντάμ"
"μαξιλάρι"
"μάρκα"
"μάρτυρας"
"μασάζ"
"μάσκα"
"μάτι"
"μάτσο"
"μαύρο"
"μαφία"
"μαχαίρι"
"μάχη"
"μεγάλα"
"μεγάλωσα"
"μέγεθος"
"μελέτη"
"μέλη"
"μέλι"
"μέλλον"
"μέλος"
"μένω"
"μέρα"
"μέρη"
"μεριά"
"μερίδιο"
"μερικά"
"μέρος"
"μέσα"
"μεσημέρι"
"μετά"
"μεταξύ"
"μεταφέρω"
"μεταφορά"
"μετοχές"
"μέτρα"
"μετρητά"
"μέτωπο"
"μέχρι"
"μηδέν"
"μήκος"
"μήλο"
"μήνες"
"μήνυμα"
"μήνυση"
"μήπως"
"μητέρα"
"μηχανή"
"μικρός"
"μίλια"
"μισά"
"μισθός"
"μίσος"
"μισώ"
"μνήμη"
"μόδα"
"μοιάζω"
"μοίρα"
"μόλις"
"μόλυνση"
"μονάδα"
"μοναδικό"
"μοναξιά"
"μονάχα"
"μόνο"
"μονοπάτι"
"μοντέλο"
"μορφή"
"μούρη"
"μουσείο"
"μουσική"
"μουστάκι"
"μούτρα"
"μπαίνω"
"μπάλα"
"μπαμπάς"
"μπανιέρα"
"μπάνιο"
"μπάσκετ"
"μπαταρία"
"μπάτσοι"
"μπελάς"
"μπίρα"
"μπισκότα"
"μπλε"
"μπλούζα"
"μπορεί"
"μπορώ"
"μπότες"
"μπουκάλι"
"μπουφάν"
"μπράβο"
"μπριζόλα"
"μπρος"
"μπροστά"
"μυαλό"
"μύθος"
"μυρίζω"
"μυρωδιά"
"μυστήριο"
"μυστικά"
"μύτη"
"μωράκι"
"μωρό"
"ναυτικό"
"νεαρός"
"νέος"
"νερό"
"νεύρα"
"νευρικός"
"νησί"
"νίκη"
"νικητής"
"νιώθω"
"νόημα"
"νοίκι"
"νομίζω"
"νομική"
"νόμιμο"
"νόμισμα"
"νόμος"
"νοσοκόμα"
"νόστιμο"
"νότια"
"νούμερο"
"ντουλάπα"
"ντροπή"
"νύφη"
"νύχια"
"νύχτα"
"νωρίς"
"νωρίτερα"
"ξανά"
"ξανθιά"
"ξαφνικά"
"ξεκάθαρα"
"ξένο"
"ξέρα"
"ξέρω"
"ξίφος"
"ξόρκι"
"ξύλο"
"ξύπνιος"
"οδηγίες"
"οδηγός"
"οδηγώ"
"οδός"
"οθόνη"
"οίκος"
"οκτώ"
"όλοι"
"ολόκληρο"
"όλον"
"ομάδα"
"ομιλία"
"ομίχλη"
"ομολογώ"
"όμορφα"
"ομορφιά"
"όμορφος"
"όμως"
"όνειρο"
"όνομα"
"ονόματα"
"όντως"
"οξυγόνο"
"όπερα"
"όπλο"
"οπότε"
"όπου"
"οπτική"
"όπως"
"όραμα"
"όργανο"
"οργάνωση"
"οργή"
"όρεξη"
"όρθιος"
"όριο"
"ορίστε"
"όρκος"
"όρος"
"οροφή"
"όροφος"
"ορυχείο"
"όταν"
"ουίσκι"
"ουρά"
"ουρανός"
"ουσία"
"ούτε"
"ούτως"
"οφείλω"
"όχημα"
"οχυρό"
"παγίδα"
"πάγκος"
"πάγος"
"παγωμένο"
"παγωτό"
"πάθος"
"παιδάκι"
"παιδί"
"παίζω"
"παίκτης"
"παίρνω"
"παιχνίδι"
"πακέτο"
"παλάτι"
"πάλη"
"παλιό"
"παλτό"
"πάμε"
"παναγία"
"πάντα"
"παντού"
"πάντως"
"πάνω"
"παπάς"
"πάπια"
"παπούτσι"
"παππούς"
"παραγωγή"
"παράδοση"
"παράθυρο"
"παρακαλώ"
"παρακάτω"
"παραλία"
"παραλίγο"
"παράλογο"
"παραμονή"
"παραμύθι"
"παράνομο"
"παράξενο"
"παραπάνω"
"παρέα"
"παρελθόν"
"παρθένα"
"πάρκο"
"παρόλο"
"παρόμοιο"
"παρόν"
"παρουσία"
"πάρτυ"
"παρών"
"πάσο"
"πατέρας"
"πατρίδα"
"πάτωμα"
"πεδίο"
"πεθαίνω"
"πείνα"
"πείραμα"
"πειρατές"
"πελάτης"
"πέμπτη"
"πενήντα"
"πέντε"
"πέρα"
"πέρασμα"
"περήφανη"
"περί"
"περίεργα"
"περιμένω"
"περίοδος"
"περιοχή"
"περίπου"
"περίφημα"
"πέρυσι"
"πέτρα"
"πετσέτα"
"πηγάδι"
"πηγαίνω"
"πηγές"
"πηγή"
"πήδημα"
"πιάνο"
"πιάνω"
"πιάτο"
"πίεση"
"πιθανό"
"πιθανώς"
"πιλότος"
"πίνακας"
"πινακίδα"
"πίνω"
"πίπα"
"πισίνα"
"πίστα"
"πιστεύω"
"πίστη"
"πιστόλι"
"πιστός"
"πίσω"
"πίτα"
"πίτσα"
"πλάι"
"πλάκα"
"πλανήτης"
"πλάσμα"
"πλάσματα"
"πλατεία"
"πλάτη"
"πλέον"
"πλευρά"
"πλευρές"
"πληγές"
"πληγή"
"πλήθος"
"πλήρη"
"πλήρωμα"
"πληρωμή"
"πληρώνω"
"πλήρως"
"πλοίο"
"πλούσια"
"πλούσιος"
"πνεύμα"
"πνεύματα"
"ποδήλατο"
"πόδι"
"ποίημα"
"ποίηση"
"ποινή"
"ποιότητα"
"πόκερ"
"πόλεις"
"πόλεμος"
"πόλη"
"πολιτεία"
"πολίτης"
"πολιτική"
"πολλά"
"πολύ"
"πολύτιμο"
"πόνος"
"ποντίκι"
"πόντους"
"πορεία"
"πόρτα"
"ποσό"
"ποσοστό"
"ποσότητα"
"ποτάμι"
"ποτέ"
"ποτήρι"
"ποτήρια"
"ποτό"
"πουθενά"
"πουλάκι"
"πουλί"
"πράγμα"
"πράγματα"
"πράγματι"
"πρακτικά"
"πράκτορα"
"πράξεις"
"πράξη"
"πράσινα"
"πράσινο"
"πρέπει"
"πρεσβεία"
"πρίγκιπα"
"πρίν"
"προαγωγή"
"προάλλες"
"πρόβα"
"πρόβατα"
"πρόβλημα"
"προδοσία"
"προδότης"
"πρόεδρος"
"πρόθεση"
"πρόθυμος"
"πρόκληση"
"πρόοδος"
"πρόποση"
"πρόσβαση"
"προσβολή"
"προσευχή"
"προσέχω"
"προσόντα"
"προσοχή"
"προσπαθώ"
"πρόσφατα"
"προσφέρω"
"προσφορά"
"πρόσωπο"
"πρόταση"
"προτείνω"
"προτιμώ"
"προφορά"
"πρωί"
"πρωινό"
"πρώτα"
"πρώτοι"
"πρώτος"
"πτέρυγα"
"πτήση"
"πτυχίο"
"πτώμα"
"πτώση"
"πύλη"
"πυρά"
"πύργος"
"πυρετός"
"πωλήσεις"
"πώληση"
"ράδιο"
"ραντάρ"
"ραντεβού"
"ρεκόρ"
"ρεπό"
"ρεπορτάζ"
"ρεπόρτερ"
"ρέστα"
"ρεύμα"
"ρισκάρω"
"ρίσκο"
"ρόλο"
"ρολόι"
"ρούχα"
"ρύζι"
"ρυθμό"
"ρωσία"
"σάββατο"
"σακάκι"
"σάκο"
"σακούλα"
"σαλάτα"
"σαλόνι"
"σάλτσα"
"σαπούνι"
"σαράντα"
"σάρκα"
"σαφής"
"σεβασμό"
"σειρά"
"σελίδα"
"σενάριο"
"σεντόνια"
"σέξυ"
"σερίφης"
"σήμα"
"σημάδι"
"σημαία"
"σημασία"
"σημεία"
"σημείωμα"
"σήμερα"
"σιγά"
"σίγουρα"
"σίγουρος"
"σινεμά"
"σιωπή"
"σκάλα"
"σκανδάλη"
"σκασμός"
"σκάφος"
"σκέτο"
"σκέψεις"
"σκέψη"
"σκηνές"
"σκηνή"
"σκιά"
"σκιές"
"σκληρά"
"σκληρός"
"σκοινί"
"σκόνη"
"σκοπεύω"
"σκοπός"
"σκοτάδι"
"σκοτεινά"
"σκοτώνω"
"σκουπίδι"
"σκύλος"
"σοβαρός"
"σόδα"
"σοκολάτα"
"σουίτα"
"σοφία"
"σοφίτα"
"σπαθί"
"σπάνια"
"σπασμένο"
"σπηλιά"
"σπιτάκι"
"σπίτι"
"σπορ"
"σπουδαία"
"στάδιο"
"σταθερά"
"σταθμός"
"στάση"
"σταυρός"
"στέγη"
"στέλνω"
"στέμμα"
"στενή"
"στήθος"
"στήλη"
"στιγμές"
"στιγμή"
"στοιχείο"
"στοίχημα"
"στολές"
"στολή"
"στόμα"
"στομάχι"
"στούντιο"
"στόχος"
"στραβά"
"στρατηγό"
"στρατός"
"στροφή"
"στρώμα"
"στυλό"
"συγνώμη"
"συγχωρώ"
"συζήτηση"
"σύζυγος"
"σύλληψη"
"συλλογή"
"σύμβολο"
"συμβουλή"
"συμπαθώ"
"σύμπαν"
"συμφωνία"
"συμφωνώ"
"συναυλία"
"σύνδεση"
"συνέδριο"
"συνέχεια"
"συνεχώς"
"συνήθεια"
"συνήθως"
"συνθήκες"
"σύννεφα"
"σύνολο"
"σύνορα"
"συνταγή"
"σύνταγμα"
"σύνταξη"
"σύντομα"
"συρτάρι"
"συσκευή"
"σύσκεψη"
"σύστημα"
"συχνά"
"σφαγή"
"σφαίρα"
"σφιχτά"
"σφυρί"
"σχέδιο"
"σχεδόν"
"σχέσεις"
"σχέση"
"σχετικά"
"σχήμα"
"σχοινί"
"σχολείο"
"σχολή"
"σχόλιο"
"σωλήνες"
"σώμα"
"σωρό"
"σωστά"
"σωστός"
"τάγμα"
"τακτική"
"ταλέντο"
"ταμείο"
"τάξη"
"ταξίδι"
"ταράτσα"
"τατουάζ"
"τάφος"
"ταχύτητα"
"τείχος"
"τέλεια"
"τέλειος"
"τελείως"
"τελετή"
"τελικά"
"τέλος"
"τένις"
"τέρας"
"τεράστιο"
"τέρατα"
"τέρι"
"τέρμα"
"τέσσερα"
"τεστ"
"τέχνη"
"τεχνική"
"τζάκι"
"τζάμπα"
"τζίνι"
"τηλέφωνο"
"τίγρη"
"τιμές"
"τιμή"
"τίμημα"
"τιμόνι"
"τιμωρία"
"τίνος"
"τίποτα"
"τίτλος"
"τμήμα"
"τοίχους"
"τομέας"
"τόνος"
"τόπος"
"τόσο"
"τότε"
"τουαλέτα"
"τούνελ"
"τουρνουά"
"τούρτα"
"τραγικό"
"τραγούδι"
"τραγωδία"
"τράπεζα"
"τραπέζι"
"τραύμα"
"τρέλα"
"τρελός"
"τρένο"
"τρέχω"
"τρία"
"τρίχα"
"τρομερά"
"τρόπος"
"τροφή"
"τρόφιμα"
"τροχιά"
"τρύπα"
"τρώω"
"τσάι"
"τσάντα"
"τσέπη"
"τσιγάρο"
"τσίρκο"
"τύπος"
"τυρί"
"τυφλός"
"τυχαία"
"τυχερός"
"τύχη"
"τύψεις"
"τώρα"
"υγεία"
"υγιής"
"υγρό"
"υλικό"
"υάρκη"
"ύπαρξη"
"υπάρχει"
"υπέρ"
"υπέροχα"
"υπέροχος"
"υπεύθυνη"
"υπηρεσία"
"υπηρέτης"
"ύπνος"
"υπόγειο"
"υπογραφή"
"υπόθεση"
"υποθέτω"
"υπόλοιπο"
"υπομονή"
"ύποπτος"
"υπόσχεση"
"υπουργός"
"υπόψη"
"ύστερα"
"ύφος"
"υψηλή"
"ύψος"
"φαγητό"
"φάκελος"
"φακός"
"φαντασία"
"φάντασμα"
"φάρμα"
"φάρμακο"
"φάρσα"
"φασαρία"
"φάση"
"φασόλια"
"φάτσα"
"φεγγάρι"
"φέρετρο"
"φέρνω"
"φέτος"
"φεύγω"
"φήμη"
"φίδι"
"φιλαράκι"
"φιλενάδα"
"φιλί"
"φιλμ"
"φίλος"
"φοβερός"
"φόβος"
"φοιτητές"
"φονιάς"
"φόνος"
"φορά"
"φόρεμα"
"φορές"
"φόρμα"
"φόρους"
"φορτηγό"
"φορτίο"
"φούρνος"
"φούστα"
"φράγμα"
"φρέσκο"
"φρικτό"
"φροντίδα"
"φροντίζω"
"φρουρά"
"φρουροί"
"φρούτα"
"φταίξιμο"
"φταίω"
"φτερά"
"φτηνό"
"φτιάχνω"
"φτωχός"
"φυλακή"
"φύση"
"φυσικά"
"φυσική"
"φυτό"
"φωλιά"
"φωνάζω"
"φωνές"
"φωνή"
"φώτα"
"φωτιά"
"χαζός"
"χαλί"
"χάλια"
"χαμένος"
"χαμηλά"
"χαμόγελο"
"χαμός"
"χαμπάρια"
"χάνω"
"χάος"
"χάπι"
"χαρά"
"χάρη"
"χάρισμα"
"χάρτης"
"χαρτί"
"χάσιμο"
"χείλη"
"χειμώνα"
"χεράκι"
"χέρι"
"χήρα"
"χθες"
"χίλια"
"χιόνι"
"χιούμορ"
"χλόη"
"χοντρός"
"χορεύω"
"χορός"
"χόρτο"
"χρέος"
"χρήμα"
"χρήση"
"χρήσιμος"
"χρόνια"
"χρόνος"
"χρυσός"
"χρώμα"
"χρωστάω"
"χτύπημα"
"χυμός"
"χώμα"
"χώρα"
"χωράφια"
"χωριό"
"χωρίς"
"χώρος"
"ψάρεμα"
"ψάρι"
"ψάχνω"
"ψέμα"
"ψεύτης"
"ψεύτικα"
"ψηλά"
"ψηλός"
"ψητό"
"ψυγείο"
"ψυχή"
"ψωμί"
"ψώνια"
"ωκεανός"
"ωραία"
"ωραίος"
"ώρες"
"ώσπου"
"ώστε"
"ωστόσο"


      });
      unique_prefix_length = 3;
      word_map = new std::unordered_map<std::string, uint32_t>;
      trimmed_word_map = new std::unordered_map<std::string, uint32_t>;
      language_name = "Greek";
      populate_maps();
    }
  };
}

#endif
