#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/AimMatrixBlendMode.hpp"
#include "source2sdk/animgraphlib/CAnimInputDamping.hpp"
#include "source2sdk/animgraphlib/CBlendCurve.hpp"
#include "source2sdk/animgraphlib/CPoseHandle.hpp"
#include "source2sdk/modellib/CAnimAttachment.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct AimMatrixOpFixedSettings_t
        {
        public:
            source2sdk::modellib::CAnimAttachment m_attachment; // 0x_            
            source2sdk::animgraphlib::CAnimInputDamping m_damping; // 0x_            
            source2sdk::animgraphlib::CPoseHandle m_poseCacheHandles[10]; // 0x_            
            source2sdk::animgraphlib::AimMatrixBlendMode m_eBlendMode; // 0x_            
            float m_flMaxYawAngle; // 0x_            
            float m_flMaxPitchAngle; // 0x_            
            std::int32_t m_nSequenceMaxFrame; // 0x_            
            std::int32_t m_nBoneMaskIndex; // 0x_            
            bool m_bTargetIsPosition; // 0x_            
            bool m_bUseBiasAndClamp; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flBiasAndClampYawOffset; // 0x_            
            float m_flBiasAndClampPitchOffset; // 0x_            
            source2sdk::animgraphlib::CBlendCurve m_biasAndClampBlendCurve; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::AimMatrixOpFixedSettings_t, m_attachment) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::AimMatrixOpFixedSettings_t, m_damping) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::AimMatrixOpFixedSettings_t, m_poseCacheHandles) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::AimMatrixOpFixedSettings_t, m_eBlendMode) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::AimMatrixOpFixedSettings_t, m_flMaxYawAngle) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::AimMatrixOpFixedSettings_t, m_flMaxPitchAngle) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::AimMatrixOpFixedSettings_t, m_nSequenceMaxFrame) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::AimMatrixOpFixedSettings_t, m_nBoneMaskIndex) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::AimMatrixOpFixedSettings_t, m_bTargetIsPosition) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::AimMatrixOpFixedSettings_t, m_bUseBiasAndClamp) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::AimMatrixOpFixedSettings_t, m_flBiasAndClampYawOffset) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::AimMatrixOpFixedSettings_t, m_flBiasAndClampPitchOffset) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::AimMatrixOpFixedSettings_t, m_biasAndClampBlendCurve) == 0x_);
        
        static_assert(sizeof(source2sdk::animgraphlib::AimMatrixOpFixedSettings_t) == 0x_);
    };
};
