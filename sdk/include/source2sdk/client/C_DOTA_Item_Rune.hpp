#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimatingActivity.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xc90
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
        class C_DOTA_Item_Rune : public source2sdk::client::CBaseAnimatingActivity
        {
        public:
            uint8_t _pad09c0[0x18]; // 0x9c0
            // metadata: MNetworkEnable
            std::int32_t m_iRuneType; // 0x9d8            
            // metadata: MNetworkEnable
            float m_flRuneTime; // 0x9dc            
            // metadata: MNetworkEnable
            std::int32_t m_nMapLocationTeam; // 0x9e0            
            // metadata: MNetworkEnable
            char m_szLocation[512]; // 0x9e4            
            std::int32_t m_iOldRuneType; // 0xbe4            
            bool m_bShowingTooltip; // 0xbe8            
            uint8_t _pad0be9[0xa7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Item_Rune because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Item_Rune) == 0xc90);
    };
};
