#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"

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
        // Size: 0x828
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkNoBase
        // 
        // static metadata: MNetworkIncludeByUserGroup "Origin"
        // static metadata: MNetworkVarNames "float32 m_MinFalloff"
        // static metadata: MNetworkVarNames "float32 m_MaxFalloff"
        // static metadata: MNetworkVarNames "float32 m_flFadeInDuration"
        // static metadata: MNetworkVarNames "float32 m_flFadeOutDuration"
        // static metadata: MNetworkVarNames "float32 m_flMaxWeight"
        // static metadata: MNetworkVarNames "float32 m_flCurWeight"
        // static metadata: MNetworkVarNames "char m_netlookupFilename"
        // static metadata: MNetworkVarNames "bool m_bEnabled"
        // static metadata: MNetworkVarNames "bool m_bMaster"
        // static metadata: MNetworkVarNames "bool m_bClientSide"
        // static metadata: MNetworkVarNames "bool m_bExclusive"
        #pragma pack(push, 1)
        class C_ColorCorrection : public source2sdk::client::C_BaseEntity
        {
        public:
            Vector m_vecOrigin; // 0x5e0            
            // metadata: MNetworkEnable
            float m_MinFalloff; // 0x5ec            
            // metadata: MNetworkEnable
            float m_MaxFalloff; // 0x5f0            
            // metadata: MNetworkEnable
            float m_flFadeInDuration; // 0x5f4            
            // metadata: MNetworkEnable
            float m_flFadeOutDuration; // 0x5f8            
            // metadata: MNetworkEnable
            float m_flMaxWeight; // 0x5fc            
            // metadata: MNetworkEnable
            float m_flCurWeight; // 0x600            
            // metadata: MNetworkEnable
            char m_netlookupFilename[512]; // 0x604            
            // metadata: MNetworkEnable
            bool m_bEnabled; // 0x804            
            // metadata: MNetworkEnable
            bool m_bMaster; // 0x805            
            // metadata: MNetworkEnable
            bool m_bClientSide; // 0x806            
            // metadata: MNetworkEnable
            bool m_bExclusive; // 0x807            
            bool m_bEnabledOnClient[1]; // 0x808            
            uint8_t _pad0809[0x3]; // 0x809
            float m_flCurWeightOnClient[1]; // 0x80c            
            bool m_bFadingIn[1]; // 0x810            
            uint8_t _pad0811[0x3]; // 0x811
            float m_flFadeStartWeight[1]; // 0x814            
            float m_flFadeStartTime[1]; // 0x818            
            float m_flFadeDuration[1]; // 0x81c            
            uint8_t _pad0820[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_ColorCorrection because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_ColorCorrection) == 0x828);
    };
};
