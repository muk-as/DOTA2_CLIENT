#pragma once
#include "source2sdk/modellib/VPhysXBodyPart_t.hpp"
#include "source2sdk/modellib/VPhysXCollisionAttributes_t.hpp"
#include "source2sdk/modellib/VPhysXConstraint2_t.hpp"
#include "source2sdk/modellib/VPhysXJoint_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
    struct PhysFeModelDesc_t;
};

namespace source2sdk::modellib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x138
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct VPhysXAggregateData_t
    {
    public:
        uint16_t m_nFlags; // 0x0        
        uint16_t m_nRefCounter; // 0x2        
        [[maybe_unused]] std::uint8_t pad_0x04[0x4]; // 0x4
        // m_bonesHash has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint32_t> m_bonesHash;
        char m_bonesHash[0x18]; // 0x8        
        // m_boneNames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_boneNames;
        char m_boneNames[0x18]; // 0x20        
        // m_indexNames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint16_t> m_indexNames;
        char m_indexNames[0x18]; // 0x38        
        // m_indexHash has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint16_t> m_indexHash;
        char m_indexHash[0x18]; // 0x50        
        // m_bindPose has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<matrix3x4a_t> m_bindPose;
        char m_bindPose[0x18]; // 0x68        
        // m_parts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<modellib::VPhysXBodyPart_t> m_parts;
        char m_parts[0x18]; // 0x80        
        // m_constraints2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<modellib::VPhysXConstraint2_t> m_constraints2;
        char m_constraints2[0x18]; // 0x98        
        // m_joints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<modellib::VPhysXJoint_t> m_joints;
        char m_joints[0x18]; // 0xb0        
        physicslib::PhysFeModelDesc_t* m_pFeModel; // 0xc8        
        // m_boneParents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint16_t> m_boneParents;
        char m_boneParents[0x18]; // 0xd0        
        // m_surfacePropertyHashes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint32_t> m_surfacePropertyHashes;
        char m_surfacePropertyHashes[0x18]; // 0xe8        
        // m_collisionAttributes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<modellib::VPhysXCollisionAttributes_t> m_collisionAttributes;
        char m_collisionAttributes[0x18]; // 0x100        
        // m_debugPartNames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_debugPartNames;
        char m_debugPartNames[0x18]; // 0x118        
        CUtlString m_embeddedKeyvalues; // 0x130        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(VPhysXAggregateData_t, m_nFlags) == 0x0);
    static_assert(offsetof(VPhysXAggregateData_t, m_nRefCounter) == 0x2);
    static_assert(offsetof(VPhysXAggregateData_t, m_bonesHash) == 0x8);
    static_assert(offsetof(VPhysXAggregateData_t, m_boneNames) == 0x20);
    static_assert(offsetof(VPhysXAggregateData_t, m_indexNames) == 0x38);
    static_assert(offsetof(VPhysXAggregateData_t, m_indexHash) == 0x50);
    static_assert(offsetof(VPhysXAggregateData_t, m_bindPose) == 0x68);
    static_assert(offsetof(VPhysXAggregateData_t, m_parts) == 0x80);
    static_assert(offsetof(VPhysXAggregateData_t, m_constraints2) == 0x98);
    static_assert(offsetof(VPhysXAggregateData_t, m_joints) == 0xb0);
    static_assert(offsetof(VPhysXAggregateData_t, m_pFeModel) == 0xc8);
    static_assert(offsetof(VPhysXAggregateData_t, m_boneParents) == 0xd0);
    static_assert(offsetof(VPhysXAggregateData_t, m_surfacePropertyHashes) == 0xe8);
    static_assert(offsetof(VPhysXAggregateData_t, m_collisionAttributes) == 0x100);
    static_assert(offsetof(VPhysXAggregateData_t, m_debugPartNames) == 0x118);
    static_assert(offsetof(VPhysXAggregateData_t, m_embeddedKeyvalues) == 0x130);
    
    static_assert(sizeof(VPhysXAggregateData_t) == 0x138);
};
