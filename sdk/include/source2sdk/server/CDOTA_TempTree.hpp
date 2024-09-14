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
    // Size: 0x810
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "Vector m_vecTreeCircleCenter"
    // static metadata: MNetworkVarNames "bool m_bCanApplyTreeCostume"
    // static metadata: MNetworkVarNames "bool m_bIsMangoTree"
    // static metadata: MNetworkVarNames "bool m_bIsPartOfFowSystem"
    #pragma pack(push, 1)
    class CDOTA_TempTree : public server::CBaseAnimatingActivity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x798[0x20]; // 0x798
        entity2::GameTime_t m_fExpireTime; // 0x7b8        
        // metadata: MNetworkEnable
        Vector m_vecTreeCircleCenter; // 0x7bc        
        // metadata: MNetworkEnable
        bool m_bCanApplyTreeCostume; // 0x7c8        
        // metadata: MNetworkEnable
        bool m_bIsMangoTree; // 0x7c9        
        [[maybe_unused]] std::uint8_t pad_0x7ca[0x6]; // 0x7ca
        // m_ParticleList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::ParticleIndex_t> m_ParticleList;
        char m_ParticleList[0x18]; // 0x7d0        
        // metadata: MNetworkEnable
        bool m_bIsPartOfFowSystem; // 0x7e8        
        bool m_bForceVisible[15]; // 0x7e9        
        [[maybe_unused]] std::uint8_t pad_0x7f8[0x18];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_TempTree because it is not a standard-layout class
    static_assert(sizeof(CDOTA_TempTree) == 0x810);
};
