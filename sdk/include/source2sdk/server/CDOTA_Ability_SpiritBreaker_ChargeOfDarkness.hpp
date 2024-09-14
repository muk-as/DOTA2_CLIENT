#pragma once
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
    // Size: 0x618
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_SpiritBreaker_ChargeOfDarkness : public server::CDOTABaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x5a0[0x10]; // 0x5a0
        bool m_bFinished; // 0x5b0        
        bool m_bInterrupted; // 0x5b1        
        bool m_bPlayedChargeAnimation; // 0x5b2        
        [[maybe_unused]] std::uint8_t pad_0x5b3[0x1]; // 0x5b3
        Vector m_vProjectileLocation; // 0x5b4        
        Vector m_vTargetLocation; // 0x5c0        
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x5cc        
        // m_hTrackingProjectileHits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hTrackingProjectileHits;
        char m_hTrackingProjectileHits[0x18]; // 0x5d0        
        // m_hTrackingProjectileTrees has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::CDOTA_Tree*> m_hTrackingProjectileTrees;
        char m_hTrackingProjectileTrees[0x18]; // 0x5e8        
        int32_t nFXIndex; // 0x600        
        int32_t m_iCurProjectileIndex; // 0x604        
        Vector m_vChargeStartPos; // 0x608        
        [[maybe_unused]] std::uint8_t pad_0x614[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_SpiritBreaker_ChargeOfDarkness because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_SpiritBreaker_ChargeOfDarkness) == 0x618);
};
