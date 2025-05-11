#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
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
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1848
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Elder_Titan_AncestralSpirit : public source2sdk::client::CDOTA_Buff
        {
        public:
            float pass_damage; // 0x17f8            
            float radius; // 0x17fc            
            std::int32_t controllable; // 0x1800            
            std::int32_t m_nCreepsHit; // 0x1804            
            std::int32_t m_nHeroesHit; // 0x1808            
            float m_flSpeed; // 0x180c            
            // m_hHitUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hHitUnits;
            char m_hHitUnits[0x18]; // 0x1810            
            Vector m_vCasterStartPosition; // 0x1828            
            Vector m_vSpiritStartPosition; // 0x1834            
            std::int32_t m_nBonusMoveSpeed; // 0x1840            
            uint8_t _pad1844[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Elder_Titan_AncestralSpirit because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Elder_Titan_AncestralSpirit) == 0x1848);
    };
};
