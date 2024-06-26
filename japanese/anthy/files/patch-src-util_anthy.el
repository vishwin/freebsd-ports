--- src-util/anthy.el.orig	2019-07-05 02:37:13 UTC
+++ src-util/anthy.el
@@ -71,7 +71,7 @@
 (defvar anthy-highlight-face nil)
 (defvar anthy-underline-face nil)
 (copy-face 'highlight 'anthy-highlight-face)
-(set-face-underline-p 'anthy-highlight-face t)
+(set-face-underline 'anthy-highlight-face t)
 (copy-face 'underline 'anthy-underline-face)
 
 ;;
@@ -745,7 +745,7 @@
 	(if anthy-agent-process
 	    (kill-process anthy-agent-process))
 	(setq anthy-agent-process proc)
-	(process-kill-without-query proc)
+	(set-process-query-on-exit-flag proc nil)
 	(if anthy-xemacs
 	    (if (coding-system-p (find-coding-system 'euc-japan))
 		(set-process-coding-system proc 'euc-japan 'euc-japan))
@@ -864,7 +864,7 @@
 ;; leim $B$N(B activate
 ;;
 (defun anthy-leim-activate (&optional name)
-  (setq inactivate-current-input-method-function 'anthy-leim-inactivate)
+  (setq deactivate-current-input-method-function 'anthy-leim-inactivate)
   (setq anthy-leim-active-p t)
   (anthy-update-mode)
   (when (eq (selected-window) (minibuffer-window))
@@ -874,7 +874,7 @@
 ;; emacs$B$N%P%0Hr$1$i$7$$$G$9(B
 ;;
 (defun anthy-leim-exit-from-minibuffer ()
-  (inactivate-input-method)
+  (deactivate-input-method)
   (when (<= (minibuffer-depth) 1)
     (remove-hook 'minibuffer-exit-hook 'anthy-leim-exit-from-minibuffer)))
 
