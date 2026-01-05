#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseTrigger.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // 
        // static metadata: MNetworkVarNames "bool m_bEnabled"
        // static metadata: MNetworkVarNames "float m_MaxWeight"
        // static metadata: MNetworkVarNames "float m_FadeDuration"
        // static metadata: MNetworkVarNames "float m_Weight"
        // static metadata: MNetworkVarNames "char m_lookupFilename"
        #pragma pack(push, 1)
        class C_ColorCorrectionVolume : public source2sdk::client::C_BaseTrigger
        {
        public:
            // metadata: MNotSaved
            float m_LastEnterWeight; // 0x_            
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_LastEnterTime; // 0x_            
            // metadata: MNotSaved
            float m_LastExitWeight; // 0x_            
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_LastExitTime; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            bool m_bEnabled; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            float m_MaxWeight; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            float m_FadeDuration; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            float m_Weight; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            char m_lookupFilename[512]; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void m_lookupFilename; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_ColorCorrectionVolume because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_ColorCorrectionVolume) == 0x_);
    };
};
