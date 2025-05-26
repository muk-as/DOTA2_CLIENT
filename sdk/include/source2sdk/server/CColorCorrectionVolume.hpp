#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseTrigger.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xbb8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "float32 m_MaxWeight"
        // static metadata: MNetworkVarNames "float32 m_FadeDuration"
        // static metadata: MNetworkVarNames "float32 m_Weight"
        // static metadata: MNetworkVarNames "char m_lookupFilename"
        #pragma pack(push, 1)
        class CColorCorrectionVolume : public source2sdk::server::CBaseTrigger
        {
        public:
            // metadata: MNetworkEnable
            float m_MaxWeight; // 0x998            
            // metadata: MNetworkEnable
            float m_FadeDuration; // 0x99c            
            // metadata: MNetworkEnable
            float m_Weight; // 0x9a0            
            // metadata: MNetworkEnable
            char m_lookupFilename[512]; // 0x9a4            
            float m_LastEnterWeight; // 0xba4            
            source2sdk::entity2::GameTime_t m_LastEnterTime; // 0xba8            
            float m_LastExitWeight; // 0xbac            
            source2sdk::entity2::GameTime_t m_LastExitTime; // 0xbb0            
            uint8_t _pad0bb4[0x4];
            
            // Datamap fields:
            // void CColorCorrectionVolumeThinkFunc; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CColorCorrectionVolume because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CColorCorrectionVolume) == 0xbb8);
    };
};
