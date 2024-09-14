#pragma once
#include "source2sdk/animgraphlib/AimMatrixBlendMode.hpp"
#include "source2sdk/animgraphlib/CAnimInputDamping.hpp"
#include "source2sdk/animgraphlib/CBlendCurve.hpp"
#include "source2sdk/animgraphlib/CPoseHandle.hpp"
#include "source2sdk/modellib/CAnimAttachment.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: true
    // Size: 0xe0
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct AimMatrixOpFixedSettings_t
    {
    public:
        modellib::CAnimAttachment m_attachment; // 0x0        
        animgraphlib::CAnimInputDamping m_damping; // 0x80        
        animgraphlib::CPoseHandle m_poseCacheHandles[10]; // 0x90        
        animgraphlib::AimMatrixBlendMode m_eBlendMode; // 0xb8        
        float m_flMaxYawAngle; // 0xbc        
        float m_flMaxPitchAngle; // 0xc0        
        int32_t m_nSequenceMaxFrame; // 0xc4        
        int32_t m_nBoneMaskIndex; // 0xc8        
        bool m_bTargetIsPosition; // 0xcc        
        bool m_bUseBiasAndClamp; // 0xcd        
        [[maybe_unused]] std::uint8_t pad_0xce[0x2]; // 0xce
        float m_flBiasAndClampYawOffset; // 0xd0        
        float m_flBiasAndClampPitchOffset; // 0xd4        
        animgraphlib::CBlendCurve m_biasAndClampBlendCurve; // 0xd8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(AimMatrixOpFixedSettings_t, m_attachment) == 0x0);
    static_assert(offsetof(AimMatrixOpFixedSettings_t, m_damping) == 0x80);
    static_assert(offsetof(AimMatrixOpFixedSettings_t, m_poseCacheHandles) == 0x90);
    static_assert(offsetof(AimMatrixOpFixedSettings_t, m_eBlendMode) == 0xb8);
    static_assert(offsetof(AimMatrixOpFixedSettings_t, m_flMaxYawAngle) == 0xbc);
    static_assert(offsetof(AimMatrixOpFixedSettings_t, m_flMaxPitchAngle) == 0xc0);
    static_assert(offsetof(AimMatrixOpFixedSettings_t, m_nSequenceMaxFrame) == 0xc4);
    static_assert(offsetof(AimMatrixOpFixedSettings_t, m_nBoneMaskIndex) == 0xc8);
    static_assert(offsetof(AimMatrixOpFixedSettings_t, m_bTargetIsPosition) == 0xcc);
    static_assert(offsetof(AimMatrixOpFixedSettings_t, m_bUseBiasAndClamp) == 0xcd);
    static_assert(offsetof(AimMatrixOpFixedSettings_t, m_flBiasAndClampYawOffset) == 0xd0);
    static_assert(offsetof(AimMatrixOpFixedSettings_t, m_flBiasAndClampPitchOffset) == 0xd4);
    static_assert(offsetof(AimMatrixOpFixedSettings_t, m_biasAndClampBlendCurve) == 0xd8);
    
    static_assert(sizeof(AimMatrixOpFixedSettings_t) == 0xe0);
};
