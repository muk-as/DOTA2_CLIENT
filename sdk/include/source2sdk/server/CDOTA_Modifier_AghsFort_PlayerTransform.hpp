#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/itemid_t.hpp"
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
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18b8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_AghsFort_PlayerTransform : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::client::itemid_t m_nCourierItemId; // 0x1878            
            CUtlString m_ModelNameOfDisguise; // 0x1880            
            uint8_t _pad1888[0x8]; // 0x1888
            std::int32_t m_nMoveSpeed; // 0x1890            
            std::int32_t m_nDisguisedSpeed; // 0x1894            
            source2sdk::client::ParticleIndex_t m_nDisguiseEffectIndex; // 0x1898            
            // m_hCourier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hCourier;
            char m_hCourier[0x4]; // 0x189c            
            bool m_bIsFlyingCourier; // 0x18a0            
            uint8_t _pad18a1[0x7]; // 0x18a1
            char* s_pszDonkeyDisguise; // 0x18a8            
            float invul_duration; // 0x18b0            
            bool m_bParticlesSpawned; // 0x18b4            
            uint8_t _pad18b5[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_PlayerTransform because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_AghsFort_PlayerTransform) == 0x18b8);
    };
};
