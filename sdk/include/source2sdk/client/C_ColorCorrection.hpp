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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
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
            Vector m_vecOrigin; // 0x_            
            // metadata: MNetworkEnable
            float m_MinFalloff; // 0x_            
            // metadata: MNetworkEnable
            float m_MaxFalloff; // 0x_            
            // metadata: MNetworkEnable
            float m_flFadeInDuration; // 0x_            
            // metadata: MNetworkEnable
            float m_flFadeOutDuration; // 0x_            
            // metadata: MNetworkEnable
            float m_flMaxWeight; // 0x_            
            // metadata: MNetworkEnable
            float m_flCurWeight; // 0x_            
            // metadata: MNetworkEnable
            char m_netlookupFilename[512]; // 0x_            
            // metadata: MNetworkEnable
            bool m_bEnabled; // 0x_            
            // metadata: MNetworkEnable
            bool m_bMaster; // 0x_            
            // metadata: MNetworkEnable
            bool m_bClientSide; // 0x_            
            // metadata: MNetworkEnable
            bool m_bExclusive; // 0x_            
            bool m_bEnabledOnClient[1]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flCurWeightOnClient[1]; // 0x_            
            bool m_bFadingIn[1]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flFadeStartWeight[1]; // 0x_            
            float m_flFadeStartTime[1]; // 0x_            
            float m_flFadeDuration[1]; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_ColorCorrection because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_ColorCorrection) == 0x_);
    };
};
