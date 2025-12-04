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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
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
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::int32_t m_iRuneType; // 0x_            
            // metadata: MNetworkEnable
            float m_flRuneTime; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nMapLocationTeam; // 0x_            
            // metadata: MNetworkEnable
            char m_szLocation[512]; // 0x_            
            std::int32_t m_iOldRuneType; // 0x_            
            bool m_bShowingTooltip; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Item_Rune because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Item_Rune) == 0x_);
    };
};
