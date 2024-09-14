#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5a0
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "string_t m_iszStackName"
    // static metadata: MNetworkVarNames "string_t m_iszOperatorName"
    // static metadata: MNetworkVarNames "string_t m_iszOpvarName"
    // static metadata: MNetworkVarNames "Vector m_vDistanceInnerMins"
    // static metadata: MNetworkVarNames "Vector m_vDistanceInnerMaxs"
    // static metadata: MNetworkVarNames "Vector m_vDistanceOuterMins"
    // static metadata: MNetworkVarNames "Vector m_vDistanceOuterMaxs"
    // static metadata: MNetworkVarNames "int m_nAABBDirection"
    #pragma pack(push, 1)
    class CCitadelSoundOpvarSetOBB : public client::C_BaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x538[0x18]; // 0x538
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_iszStackName; // 0x550        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_iszOperatorName; // 0x558        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_iszOpvarName; // 0x560        
        // metadata: MNetworkEnable
        Vector m_vDistanceInnerMins; // 0x568        
        // metadata: MNetworkEnable
        Vector m_vDistanceInnerMaxs; // 0x574        
        // metadata: MNetworkEnable
        Vector m_vDistanceOuterMins; // 0x580        
        // metadata: MNetworkEnable
        Vector m_vDistanceOuterMaxs; // 0x58c        
        // metadata: MNetworkEnable
        int32_t m_nAABBDirection; // 0x598        
        [[maybe_unused]] std::uint8_t pad_0x59c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelSoundOpvarSetOBB because it is not a standard-layout class
    static_assert(sizeof(CCitadelSoundOpvarSetOBB) == 0x5a0);
};
