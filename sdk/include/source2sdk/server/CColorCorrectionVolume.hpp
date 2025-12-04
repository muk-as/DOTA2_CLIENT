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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
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
            float m_MaxWeight; // 0x_            
            // metadata: MNetworkEnable
            float m_FadeDuration; // 0x_            
            // metadata: MNetworkEnable
            float m_Weight; // 0x_            
            // metadata: MNetworkEnable
            char m_lookupFilename[512]; // 0x_            
            float m_LastEnterWeight; // 0x_            
            source2sdk::entity2::GameTime_t m_LastEnterTime; // 0x_            
            float m_LastExitWeight; // 0x_            
            source2sdk::entity2::GameTime_t m_LastExitTime; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void CColorCorrectionVolumeThinkFunc; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CColorCorrectionVolume because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CColorCorrectionVolume) == 0x_);
    };
};
