[@bs.module "react-stripe-elements"]
external reactClass : ReasonReact.reactClass = "default";

let make =
    (
      ~className: string,
      ~elementRef: Js.t({..} as 'a),
      ~onBlur,
      ~onClick,
      ~onFocus,
      ~onReady,
      _children
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props={
      "className": className,
      "elementRef": elementRef,
      "onBlur": onBlur,
      "onClick": onClick,
      "onFocus": onFocus,
      "onReady": onReady
    },
    [||]
  );


