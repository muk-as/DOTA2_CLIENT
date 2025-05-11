#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/itemid_t.hpp"
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
        // Size: 0x1838
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_AghsFort_PlayerTransform : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::client::itemid_t m_nCourierItemId; // 0x17f8            
            CUtlString m_ModelNameOfDisguise; // 0x1800            
            uint8_t _pad1808[0x8]; // 0x1808
            std::int32_t m_nMoveSpeed; // 0x1810            
            std::int32_t m_nDisguisedSpeed; // 0x1814            
            source2sdk::client::ParticleIndex_t m_nDisguiseEffectIndex; // 0x1818            
            // m_hCourier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hCourier;
            char m_hCourier[0x4]; // 0x181c            
            bool m_bIsFlyingCourier; // 0x1820            
            uint8_t _pad1821[0x7]; // 0x1821
            char* s_pszDonkeyDisguise; // 0x1828            
            float invul_duration; // 0x1830            
            bool m_bParticlesSpawned; // 0x1834            
            uint8_t _pad1835[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_PlayerTransform because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_AghsFort_PlayerTransform) == 0x1838);
    };
};
