#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseAnimatingActivity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x838
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MNetworkVarNames "Vector m_vecTreeCircleCenter"
    // static metadata: MNetworkVarNames "bool m_bCanApplyTreeCostume"
    // static metadata: MNetworkVarNames "bool m_bIsMangoTree"
    // static metadata: MNetworkVarNames "bool m_bIsPartOfFowSystem"
    #pragma pack(push, 1)
    class CDOTA_TempTree : public server::CBaseAnimatingActivity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x7c0[0x20]; // 0x7c0
        entity2::GameTime_t m_fExpireTime; // 0x7e0        
        // metadata: MNetworkEnable
        Vector m_vecTreeCircleCenter; // 0x7e4        
        // metadata: MNetworkEnable
        bool m_bCanApplyTreeCostume; // 0x7f0        
        // metadata: MNetworkEnable
        bool m_bIsMangoTree; // 0x7f1        
        [[maybe_unused]] std::uint8_t pad_0x7f2[0x6]; // 0x7f2
        // m_ParticleList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::ParticleIndex_t> m_ParticleList;
        char m_ParticleList[0x18]; // 0x7f8        
        // metadata: MNetworkEnable
        bool m_bIsPartOfFowSystem; // 0x810        
        bool m_bForceVisible[15]; // 0x811        
        [[maybe_unused]] std::uint8_t pad_0x820[0x18];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_TempTree because it is not a standard-layout class
    static_assert(sizeof(CDOTA_TempTree) == 0x838);
};
