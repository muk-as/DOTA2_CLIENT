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
        // Size: 0x18c8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_MjollnirChain : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t chain_radius; // 0x1888            
            std::int32_t chain_strikes; // 0x188c            
            std::int32_t chain_damage; // 0x1890            
            float chain_delay; // 0x1894            
            std::int32_t chain_damage_per_charge; // 0x1898            
            std::int32_t m_iCurJumpCount; // 0x189c            
            Vector m_vCurTargetLoc; // 0x18a0            
            uint8_t _pad18ac[0x4]; // 0x18ac
            // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hHitEntities;
            char m_hHitEntities[0x18]; // 0x18b0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_MjollnirChain because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_MjollnirChain) == 0x18c8);
    };
};
