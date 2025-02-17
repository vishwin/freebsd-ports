--- include/libsemigroups/sims1.tpp.orig	2024-01-19 14:15:04 UTC
+++ include/libsemigroups/sims1.tpp
@@ -619,7 +619,7 @@ namespace libsemigroups {
   typename Sims1<T>::iterator_base&
   Sims1<T>::iterator_base::operator=(Sims1<T>::iterator_base&& that) {
     _extra           = std::move(that._extra);
-    _longs           = std::move(that.long_rules());
+    _longs           = std::move(that._longs);
     _max_num_classes = std::move(that._max_num_classes);
     _min_target_node = std::move(that._min_target_node);
     _felsch_graph    = std::move(that._felsch_graph);
