#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/itemid_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1748
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_AghsFort_PlayerTransform : public client::CDOTA_Buff
    {
    public:
        client::itemid_t m_nCourierItemId; // 0x1708        
        CUtlString m_ModelNameOfDisguise; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x1718[0x8]; // 0x1718
        int32_t m_nMoveSpeed; // 0x1720        
        int32_t m_nDisguisedSpeed; // 0x1724        
        client::ParticleIndex_t m_nDisguiseEffectIndex; // 0x1728        
        // m_hCourier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hCourier;
        char m_hCourier[0x4]; // 0x172c        
        bool m_bIsFlyingCourier; // 0x1730        
        [[maybe_unused]] std::uint8_t pad_0x1731[0x7]; // 0x1731
        char* s_pszDonkeyDisguise; // 0x1738        
        float invul_duration; // 0x1740        
        bool m_bParticlesSpawned; // 0x1744        
        [[maybe_unused]] std::uint8_t pad_0x1745[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_PlayerTransform because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_AghsFort_PlayerTransform) == 0x1748);
};
