#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"
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
    class CDOTA_Tree;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x610
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_NianCharge : public server::CDOTABaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x5a0[0x10]; // 0x5a0
        bool m_bChargeFinished; // 0x5b0        
        bool m_bPlayedChargeAnimation; // 0x5b1        
        bool m_bPinning; // 0x5b2        
        [[maybe_unused]] std::uint8_t pad_0x5b3[0x1]; // 0x5b3
        entity2::GameTime_t m_flPinStartTime; // 0x5b4        
        Vector m_vProjectileLocation; // 0x5b8        
        Vector m_vTargetLocation; // 0x5c4        
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x5d0        
        [[maybe_unused]] std::uint8_t pad_0x5d4[0x4]; // 0x5d4
        // m_hTrackingProjectileHits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hTrackingProjectileHits;
        char m_hTrackingProjectileHits[0x18]; // 0x5d8        
        // m_hTrackingProjectileTrees has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::CDOTA_Tree*> m_hTrackingProjectileTrees;
        char m_hTrackingProjectileTrees[0x18]; // 0x5f0        
        int32_t nFXIndex; // 0x608        
        int32_t m_iCurProjectileIndex; // 0x60c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_NianCharge because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_NianCharge) == 0x610);
};
