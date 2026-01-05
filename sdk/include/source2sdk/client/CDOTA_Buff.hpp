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
        // Size: 0x_
        // Has VTable
        // Is Abstract
        #pragma pack(push, 1)
        class CDOTA_Buff : public source2sdk::client::C_HorizontalMotionController
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_name; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_iszModifierAura; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_iSerialNumber; // 0x_            
            // metadata: MFieldVerificationName "m_iStringIndex"
            std::int32_t m_iPaddingToMakeSchemaHappy; // 0x_            
            std::int32_t m_iIndex; // 0x_            
            source2sdk::entity2::GameTime_t m_flCreationTime; // 0x_            
            std::int32_t m_iCreationFrame; // 0x_            
            source2sdk::entity2::GameTime_t m_flLastAppliedTime; // 0x_            
            float m_flDuration; // 0x_            
            source2sdk::entity2::GameTime_t m_flDieTime; // 0x_            
            // m_hCaster has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hCaster;
            char m_hCaster[0x_]; // 0x_            
            // m_hAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hAbility;
            char m_hAbility[0x_]; // 0x_            
            // m_hParent has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hParent;
            char m_hParent[0x_]; // 0x_            
            // m_hDuplicationSource has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hDuplicationSource;
            char m_hDuplicationSource[0x_]; // 0x_            
            // m_hAuraOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hAuraOwner;
            char m_hAuraOwner[0x_]; // 0x_            
            std::int32_t m_iStackCount; // 0x_            
            std::int16_t m_iAuraSearchTeam; // 0x_            
            std::int16_t m_iAuraSearchType; // 0x_            
            std::int32_t m_iAuraSearchFlags; // 0x_            
            float m_flAuraRadius; // 0x_            
            std::int32_t m_iTeam; // 0x_            
            std::int32_t m_iAttributes; // 0x_            
            // metadata: MFieldVerificationName "m_iTooltipParity"
            std::int16_t m_iTooltipParity; // 0x_            
            // start of bitfield block
            uint8_t m_bIsAura: 1;
            uint8_t m_bIsAuraActiveOnDeath: 1;
            uint8_t m_bMarkedForDeletion: 1;
            uint8_t m_bAuraIsHeal: 1;
            uint8_t m_bProvidedByAura: 1;
            uint8_t m_bCurrentlyInAuraRange: 1;
            // end of bitfield block// 6 bits
            bool m_bPurgedDestroy; // 0x_            
            source2sdk::entity2::GameTime_t m_flPreviousTick; // 0x_            
            float m_flThinkInterval; // 0x_            
            float m_flThinkTimeAccumulator; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_iParticles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTA_BuffParticle> m_iParticles;
            char m_iParticles[0x_]; // 0x_            
            // m_hAuraUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hAuraUnits;
            char m_hAuraUnits[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            HSCRIPT m_hScriptScope; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Buff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Buff) == 0x_);
    };
};
