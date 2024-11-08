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
    // Size: 0xb08
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
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
        [[maybe_unused]] std::uint8_t pad_0x848[0x8]; // 0x848
        // metadata: MNetworkEnable
        int32_t m_iRuneType; // 0x850        
        // metadata: MNetworkEnable
        float m_flRuneTime; // 0x854        
        // metadata: MNetworkEnable
        int32_t m_nMapLocationTeam; // 0x858        
        // metadata: MNetworkEnable
        char m_szLocation[512]; // 0x85c        
        int32_t m_iOldRuneType; // 0xa5c        
        bool m_bShowingTooltip; // 0xa60        
        [[maybe_unused]] std::uint8_t pad_0xa61[0xa7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Item_Rune because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Item_Rune) == 0xb08);
};
