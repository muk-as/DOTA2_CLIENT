#pragma once
#include "source2sdk/server/CDOTA_BaseNPC_Hero.hpp"
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
    // Size: 0x1e90
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "DotaTreeId_t m_nTreeDisguise"
    // static metadata: MNetworkVarNames "DotaTreeId_t m_nPerchedTree"
    #pragma pack(push, 1)
    class CDOTA_Unit_Hero_MonkeyKing : public server::CDOTA_BaseNPC_Hero
    {
    public:
        // metadata: MNetworkEnable
        uint32_t m_nTreeDisguise; // 0x1e68        
        // metadata: MNetworkEnable
        uint32_t m_nPerchedTree; // 0x1e6c        
        Vector m_vLastPos; // 0x1e70        
        bool m_bIsOnCloud; // 0x1e7c        
        [[maybe_unused]] std::uint8_t pad_0x1e7d[0x3]; // 0x1e7d
        float m_fTotalDistOnCloud; // 0x1e80        
        float m_fTotalDistoffCloud; // 0x1e84        
        float m_fBackOnCloudThresh; // 0x1e88        
        [[maybe_unused]] std::uint8_t pad_0x1e8c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Unit_Hero_MonkeyKing because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Unit_Hero_MonkeyKing) == 0x1e90);
};
