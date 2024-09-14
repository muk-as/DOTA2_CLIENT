#pragma once
#include "source2sdk/client/CBaseAnimatingActivity.hpp"
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
    // Size: 0xab8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkExcludeByName "m_flAnimTime"
    // static metadata: MNetworkExcludeByUserGroup "m_flCycle"
    // static metadata: MNetworkExcludeByName "m_flPoseParameter"
    // static metadata: MNetworkExcludeByName "m_flSimulationTime"
    // static metadata: MNetworkVarNames "int m_iRuneType"
    // static metadata: MNetworkVarNames "float m_flRuneTime"
    // static metadata: MNetworkVarNames "int m_nMapLocationTeam"
    // static metadata: MNetworkVarNames "char m_szLocation"
    #pragma pack(push, 1)
    class C_DOTA_Item_Rune : public client::CBaseAnimatingActivity
    {
    public:
        // metadata: MNetworkEnable
        int32_t m_iRuneType; // 0x800        
        // metadata: MNetworkEnable
        float m_flRuneTime; // 0x804        
        // metadata: MNetworkEnable
        int32_t m_nMapLocationTeam; // 0x808        
        // metadata: MNetworkEnable
        char m_szLocation[512]; // 0x80c        
        int32_t m_iOldRuneType; // 0xa0c        
        bool m_bShowingTooltip; // 0xa10        
        [[maybe_unused]] std::uint8_t pad_0xa11[0xa7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Item_Rune because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Item_Rune) == 0xab8);
};
