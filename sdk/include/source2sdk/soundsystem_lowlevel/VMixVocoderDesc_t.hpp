#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_lowlevel
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace soundsystem_lowlevel
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct VMixVocoderDesc_t
        {
        public:
            std::int32_t m_nBandCount; // 0x_            
            float m_flBandwidth; // 0x_            
            float m_fldBModGain; // 0x_            
            float m_flFreqRangeStart; // 0x_            
            float m_flFreqRangeEnd; // 0x_            
            float m_fldBUnvoicedGain; // 0x_            
            float m_flAttackTimeMS; // 0x_            
            float m_flReleaseTimeMS; // 0x_            
            std::int32_t m_nDebugBand; // 0x_            
            bool m_bPeakMode; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixVocoderDesc_t, m_nBandCount) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixVocoderDesc_t, m_flBandwidth) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixVocoderDesc_t, m_fldBModGain) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixVocoderDesc_t, m_flFreqRangeStart) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixVocoderDesc_t, m_flFreqRangeEnd) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixVocoderDesc_t, m_fldBUnvoicedGain) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixVocoderDesc_t, m_flAttackTimeMS) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixVocoderDesc_t, m_flReleaseTimeMS) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixVocoderDesc_t, m_nDebugBand) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixVocoderDesc_t, m_bPeakMode) == 0x_);
        
        static_assert(sizeof(source2sdk::soundsystem_lowlevel::VMixVocoderDesc_t) == 0x_);
    };
};
