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
        // Size: 0x5f0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_TrollWarlord_WhirlingAxes_Ranged : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            Vector m_vStartPos; // 0x5b0            
            std::int32_t m_iArrowProjectile; // 0x5bc            
            float axe_width; // 0x5c0            
            float axe_speed; // 0x5c4            
            float axe_range; // 0x5c8            
            float axe_spread; // 0x5cc            
            std::int32_t axe_count; // 0x5d0            
            uint8_t _pad05d4[0x4]; // 0x5d4
            // m_hHitUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hHitUnits;
            char m_hHitUnits[0x18]; // 0x5d8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_TrollWarlord_WhirlingAxes_Ranged because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_TrollWarlord_WhirlingAxes_Ranged) == 0x5f0);
    };
};
