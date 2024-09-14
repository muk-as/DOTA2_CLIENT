#pragma once
#include "source2sdk/client/PointCameraSettings_t.hpp"
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseLerp__CursorState_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_PointCamera;
};

namespace source2sdk::client
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: false
    // Size: 0x2c
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct CPulseCell_LerpCameraSettings__CursorState_t : public pulse_runtime_lib::CPulseCell_BaseLerp__CursorState_t
    {
    public:
        // m_hCamera has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_PointCamera> m_hCamera;
        char m_hCamera[0x4]; // 0x8        
        client::PointCameraSettings_t m_OverlaidStart; // 0xc        
        client::PointCameraSettings_t m_OverlaidEnd; // 0x1c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPulseCell_LerpCameraSettings::CursorState_t because it is not a standard-layout class
    static_assert(sizeof(CPulseCell_LerpCameraSettings__CursorState_t) == 0x2c);
};
