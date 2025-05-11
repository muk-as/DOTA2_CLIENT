#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPointEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x530
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "float m_fFanForceMaxRadius"
        // static metadata: MNetworkVarNames "float m_fFanForceMinRadius"
        // static metadata: MNetworkVarNames "float m_flCurveDistRange"
        // static metadata: MNetworkVarNames "string_t m_FanForceCurveString"
        #pragma pack(push, 1)
        class CInfoFan : public source2sdk::server::CPointEntity
        {
        public:
            uint8_t _pad04d8[0x40]; // 0x4d8
            // metadata: MNetworkEnable
            float m_fFanForceMaxRadius; // 0x518            
            // metadata: MNetworkEnable
            float m_fFanForceMinRadius; // 0x51c            
            // metadata: MNetworkEnable
            float m_flCurveDistRange; // 0x520            
            uint8_t _pad0524[0x4]; // 0x524
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_FanForceCurveString; // 0x528            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CInfoFan because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CInfoFan) == 0x530);
    };
};
