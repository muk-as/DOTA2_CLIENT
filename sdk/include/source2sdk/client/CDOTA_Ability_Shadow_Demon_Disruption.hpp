#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Size: 0x688
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Shadow_Demon_Disruption : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            // m_hDisruptedUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hDisruptedUnit;
            char m_hDisruptedUnit[0x4]; // 0x680            
            uint8_t _pad0684[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Shadow_Demon_Disruption because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Ability_Shadow_Demon_Disruption) == 0x688);
    };
};
