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
        // Size: 0xb88
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
            float m_MaxWeight; // 0x968            
            // metadata: MNetworkEnable
            float m_FadeDuration; // 0x96c            
            // metadata: MNetworkEnable
            float m_Weight; // 0x970            
            // metadata: MNetworkEnable
            char m_lookupFilename[512]; // 0x974            
            float m_LastEnterWeight; // 0xb74            
            source2sdk::entity2::GameTime_t m_LastEnterTime; // 0xb78            
            float m_LastExitWeight; // 0xb7c            
            source2sdk::entity2::GameTime_t m_LastExitTime; // 0xb80            
            uint8_t _pad0b84[0x4];
            
            // Datamap fields:
            // void CColorCorrectionVolumeThinkFunc; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CColorCorrectionVolume because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CColorCorrectionVolume) == 0xb88);
    };
};
