#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_PointEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x640
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "float m_fFanForceMaxRadius"
        // static metadata: MNetworkVarNames "float m_fFanForceMinRadius"
        // static metadata: MNetworkVarNames "float m_flCurveDistRange"
        // static metadata: MNetworkVarNames "string_t m_FanForceCurveString"
        #pragma pack(push, 1)
        class CInfoFan : public source2sdk::client::C_PointEntity
        {
        public:
            uint8_t _pad05e8[0x40]; // 0x5e8
            // metadata: MNetworkEnable
            float m_fFanForceMaxRadius; // 0x628            
            // metadata: MNetworkEnable
            float m_fFanForceMinRadius; // 0x62c            
            // metadata: MNetworkEnable
            float m_flCurveDistRange; // 0x630            
            uint8_t _pad0634[0x4]; // 0x634
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_FanForceCurveString; // 0x638            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CInfoFan because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CInfoFan) == 0x640);
    };
};
