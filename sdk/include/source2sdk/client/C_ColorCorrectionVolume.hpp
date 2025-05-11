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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xb38
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
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
            float m_LastEnterWeight; // 0x910            
            source2sdk::entity2::GameTime_t m_LastEnterTime; // 0x914            
            float m_LastExitWeight; // 0x918            
            source2sdk::entity2::GameTime_t m_LastExitTime; // 0x91c            
            // metadata: MNetworkEnable
            bool m_bEnabled; // 0x920            
            uint8_t _pad0921[0x3]; // 0x921
            // metadata: MNetworkEnable
            float m_MaxWeight; // 0x924            
            // metadata: MNetworkEnable
            float m_FadeDuration; // 0x928            
            // metadata: MNetworkEnable
            float m_Weight; // 0x92c            
            // metadata: MNetworkEnable
            char m_lookupFilename[512]; // 0x930            
            uint8_t _pad0b30[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_ColorCorrectionVolume because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_ColorCorrectionVolume) == 0xb38);
    };
};
