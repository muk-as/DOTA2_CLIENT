#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
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
        // Size: 0x528
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CMessage : public source2sdk::server::CPointEntity
        {
        public:
            CUtlSymbolLarge m_iszMessage; // 0x4e0            
            float m_MessageVolume; // 0x4e8            
            std::int32_t m_MessageAttenuation; // 0x4ec            
            float m_Radius; // 0x4f0            
            uint8_t _pad04f4[0x4]; // 0x4f4
            CUtlSymbolLarge m_sNoise; // 0x4f8            
            source2sdk::entity2::CEntityIOOutput m_OnShowMessage; // 0x500            
            
            // Datamap fields:
            // void InputShowMessage; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CMessage because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CMessage) == 0x528);
    };
};
