#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_BuffParticle.hpp"
#include "source2sdk/client/C_HorizontalMotionController.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0x1878
        // Has VTable
        // Is Abstract
        #pragma pack(push, 1)
        class CDOTA_Buff : public source2sdk::client::C_HorizontalMotionController
        {
        public:
            uint8_t _pad0010[0x18]; // 0x10
            CUtlSymbolLarge m_name; // 0x28            
            uint8_t _pad0030[0x8]; // 0x30
            CUtlSymbolLarge m_iszModifierAura; // 0x38            
            uint8_t _pad0040[0x8]; // 0x40
            std::int32_t m_iSerialNumber; // 0x48            
            // metadata: MFieldVerificationName "m_iStringIndex"
            std::int32_t m_iPaddingToMakeSchemaHappy; // 0x4c            
            std::int32_t m_iIndex; // 0x50            
            source2sdk::entity2::GameTime_t m_flCreationTime; // 0x54            
            std::int32_t m_iCreationFrame; // 0x58            
            source2sdk::entity2::GameTime_t m_flLastAppliedTime; // 0x5c            
            float m_flDuration; // 0x60            
            source2sdk::entity2::GameTime_t m_flDieTime; // 0x64            
            // m_hCaster has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hCaster;
            char m_hCaster[0x4]; // 0x68            
            // m_hAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hAbility;
            char m_hAbility[0x4]; // 0x6c            
            // m_hParent has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hParent;
            char m_hParent[0x4]; // 0x70            
            // m_hAuraOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hAuraOwner;
            char m_hAuraOwner[0x4]; // 0x74            
            std::int32_t m_iStackCount; // 0x78            
            std::int16_t m_iAuraSearchTeam; // 0x7c            
            std::int16_t m_iAuraSearchType; // 0x7e            
            std::int32_t m_iAuraSearchFlags; // 0x80            
            float m_flAuraRadius; // 0x84            
            std::int32_t m_iTeam; // 0x88            
            std::int32_t m_iAttributes; // 0x8c            
            // metadata: MFieldVerificationName "m_iTooltipParity"
            std::int16_t m_iTooltipParity; // 0x90            
            // start of bitfield block
            uint8_t m_bIsAura: 1;
            uint8_t m_bIsAuraActiveOnDeath: 1;
            uint8_t m_bMarkedForDeletion: 1;
            uint8_t m_bAuraIsHeal: 1;
            uint8_t m_bProvidedByAura: 1;
            uint8_t m_bCurrentlyInAuraRange: 1;
            // end of bitfield block// 6 bits
            bool m_bPurgedDestroy; // 0x93            
            source2sdk::entity2::GameTime_t m_flPreviousTick; // 0x94            
            float m_flThinkInterval; // 0x98            
            float m_flThinkTimeAccumulator; // 0x9c            
            // m_iParticles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTA_BuffParticle> m_iParticles;
            char m_iParticles[0x18]; // 0xa0            
            // m_hAuraUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hAuraUnits;
            char m_hAuraUnits[0x18]; // 0xb8            
            uint8_t _pad00d0[0x17a0]; // 0xd0
            HSCRIPT m_hScriptScope; // 0x1870            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Buff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Buff) == 0x1878);
    };
};
