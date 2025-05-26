#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABaseAbility.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CDOTABaseAbility;
    };
};

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
        // Size: 0x5c8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Visage_GravekeepersCloak : public source2sdk::server::CDOTABaseAbility
        {
        public:
            // m_hSourceAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTABaseAbility> m_hSourceAbility;
            char m_hSourceAbility[0x4]; // 0x5c0            
            uint8_t _pad05c4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Visage_GravekeepersCloak because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Visage_GravekeepersCloak) == 0x5c8);
    };
};
