#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_ArcanaDataEntity_Base.hpp"

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
        // Size: 0x38
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "int m_nEmpoweredKills"
        #pragma pack(push, 1)
        class CDOTA_ArcanaDataEntity_Razor : public source2sdk::client::CDOTA_ArcanaDataEntity_Base
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnRazorArcanaChanged"
            std::int32_t m_nEmpoweredKills; // 0x30            
            uint8_t _pad0034[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_ArcanaDataEntity_Razor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_ArcanaDataEntity_Razor) == 0x38);
    };
};
