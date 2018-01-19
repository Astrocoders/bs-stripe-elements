[@bs.module "react-stripe-elements"]
external reactClass : ReasonReact.reactClass = "default";

let make =
    (
      ~apiKey: string,
      ~label: string,
      ~elementRef: Js.t({..} as 'a),
      _children
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props={
      "apiKey": apiKey,
      "label": label,
      "elementRef": elementRef
    },
    [||]
  );


