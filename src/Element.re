[@bs.module "react-stripe-elements"]
external reactClass : ReasonReact.reactClass = "default";

let make =
    (
      ~className: string,
      ~label: string,
      ~elementRef,
      ~onChange,
      ~onBlur,
      ~onFocus,
      ~onReady,
      _children
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props={
      "className": className,
      "label": label,
      "elementRef": elementRef,
      "onChange": onChange,
      "onBlur": onBlur,
      "onFocus": onFocus,
      "onReady": onReady
    },
    [||]
  );


  