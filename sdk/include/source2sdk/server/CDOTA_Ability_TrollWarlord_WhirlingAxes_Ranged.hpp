#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABaseAbility.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged : public source2sdk::server::CDOTABaseAbility
        {
        public:
            Vector m_vStartPos; // 0x_            
            std::int32_t m_iArrowProjectile; // 0x_            
            float axe_width; // 0x_            
            float axe_speed; // 0x_            
            float axe_range; // 0x_            
            float axe_spread; // 0x_            
            std::int32_t axe_count; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hHitUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hHitUnits;
            char m_hHitUnits[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged) == 0x_);
    };
};
