/*
 * @file
 * Defines default strategy parameter values for the given timeframe.
 */

// Defines indicator's parameter values for the given pair symbol and timeframe.
struct Indi_Envelopes_Params_M1 : Indi_Envelopes_Params {
  Indi_Envelopes_Params_M1() : Indi_Envelopes_Params(indi_envelopes_defaults, PERIOD_M1) {
    applied_price = (ENUM_APPLIED_PRICE)0;
    deviation = 0.5;
    ma_method = 3;
    ma_period = 20;
    ma_shift = 0;
    shift = 0;
  }
} indi_envelopes_m1;

// Defines strategy's parameter values for the given pair symbol and timeframe.
struct Stg_Envelopes_Params_M1 : StgParams {
  // Struct constructor.
  Stg_Envelopes_Params_M1() : StgParams(stg_envelopes_defaults) {
    lot_size = 0;
    signal_open_method = 0;
    signal_open_filter = 1;
    signal_open_level = (float)0;
    signal_open_boost = 0;
    signal_close_method = 0;
    signal_close_level = (float)0;
    price_stop_method = 0;
    price_stop_level = 2;
    tick_filter_method = 1;
    max_spread = 0;
  }
} stg_envelopes_m1;
