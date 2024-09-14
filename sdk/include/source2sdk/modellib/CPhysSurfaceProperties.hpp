#pragma once
#include "source2sdk/modellib/CPhysSurfacePropertiesAudio.hpp"
#include "source2sdk/modellib/CPhysSurfacePropertiesPhysics.hpp"
#include "source2sdk/modellib/CPhysSurfacePropertiesSoundNames.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0xc0
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CPhysSurfaceProperties
    {
    public:
        // metadata: MKV3TransferName "surfacePropertyName"
        CUtlString m_name; // 0x0        
        uint32_t m_nameHash; // 0x8        
        uint32_t m_baseNameHash; // 0xc        
        [[maybe_unused]] std::uint8_t pad_0x10[0x8]; // 0x10
        // metadata: MKV3TransferName "hidden"
        bool m_bHidden; // 0x18        
        [[maybe_unused]] std::uint8_t pad_0x19[0x7]; // 0x19
        // metadata: MKV3TransferName "description"
        CUtlString m_description; // 0x20        
        // metadata: MKV3TransferName "physics"
        modellib::CPhysSurfacePropertiesPhysics m_physics; // 0x28        
        [[maybe_unused]] std::uint8_t pad_0x44[0x4]; // 0x44
        // metadata: MKV3TransferName "audiosounds"
        modellib::CPhysSurfacePropertiesSoundNames m_audioSounds; // 0x48        
        // metadata: MKV3TransferName "audioparams"
        modellib::CPhysSurfacePropertiesAudio m_audioParams; // 0xa0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CPhysSurfaceProperties, m_name) == 0x0);
    static_assert(offsetof(CPhysSurfaceProperties, m_nameHash) == 0x8);
    static_assert(offsetof(CPhysSurfaceProperties, m_baseNameHash) == 0xc);
    static_assert(offsetof(CPhysSurfaceProperties, m_bHidden) == 0x18);
    static_assert(offsetof(CPhysSurfaceProperties, m_description) == 0x20);
    static_assert(offsetof(CPhysSurfaceProperties, m_physics) == 0x28);
    static_assert(offsetof(CPhysSurfaceProperties, m_audioSounds) == 0x48);
    static_assert(offsetof(CPhysSurfaceProperties, m_audioParams) == 0xa0);
    
    static_assert(sizeof(CPhysSurfaceProperties) == 0xc0);
};
